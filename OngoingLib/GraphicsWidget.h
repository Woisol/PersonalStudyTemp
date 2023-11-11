//主要参考了https://blog.csdn.net/qq_39151563/article/details/114607800
// #define RoundRectButton 0
#include<graphics.h>
#include<stdbool.h>
#include<math.h>

#define FULLFPS 165
#define COMMONFPS 60
#define FPS 120

struct RoundRectButton
{
	int x, y;
	int width, height;
	float radius;
}
button;

void egeWindowInition(const char* caption, const int winWidth, const int winHeight, bool debug = 0)
{
	setinitmode(INIT_NOFORCEEXIT);
	if (debug == 0)
	{
		setinitmode(INIT_RENDERMANUAL);
	}
	setcaption(caption);
	initgraph(winWidth, winHeight, 0); // 这个0是用来加入ege自己的开场动画的，为1时在debug时无在release时有
	setbkcolor(WHITE);								   // 注意这个是在initgraph之后搞的！

	setcolor(BLACK);//不设置的话默认是浅灰欸
	setbkmode(TRANSPARENT);//艹又是莫名其妙哈哈加了这个后面的文字背景就透明了
}

void egeInitRoundRectButton(struct RoundRectButton* button, int x, int y, int width, int height, float radius)
{
	button->x = x;
	button->y = y;
	button->width = width;
	button->height = height;
	button->radius = radius;//md又犯了传形参的错误……
}
void egeDrawButton(const RoundRectButton* button, color_t color, wchar_t title[])
{
	setfillcolor(color);
	setbkcolor(WHITE);

	ege_fillrect((float)(button->x + button->radius), (float)(button->y),
		(float)(button->width - 2 * button->radius), float(button->height)
	);

	ege_fillrect((float)(button->x), (float)(button->y + button->radius),
		(float)(button->radius), (float)(button->height - 2 * button->radius)
	);

	ege_fillrect((float)(button->x + button->width - button->radius),
		(float)(button->y + button->radius),
		(float)(button->radius), (float)(button->height - 2 * button->radius)
	);
	// delay_fps(0);



	float diameter = 2 * button->radius;
	float dx = button->width - diameter;
	float dy = button->height - diameter;
	// delay_fps(0);


	ege_fillpie((float)(button->x + dx), (float)(button->y + dy), diameter, diameter, 0.0f, 90.0f);
	ege_fillpie((float)(button->x), (float)(button->y + dy), diameter, diameter, 90.0f, 90.0f);
	ege_fillpie((float)(button->x), (float)(button->y), diameter, diameter, 180.0f, 90.0f);
	ege_fillpie((float)(button->x + dx), (float)(button->y), diameter, diameter, 270.0f, 90.0f);
	//这里的作图思路是先填充上下和中间的矩形，到两边的矩形，最后才填充圆。

	settextjustify(CENTER_TEXT, CENTER_TEXT);
	setbkcolor(TRANSPARENT);
	outtextxy(button->x + button->width / 2, button->y + button->height / 2, title);
	setbkcolor(WHITE);
	// delay_fps(0);
}

bool egeIsInsideRoundRectButton(const RoundRectButton* button, int x, int y)
{
	bool inside = false;

	// 点在包围矩形内
	if ((x >= button->x) && (y >= button->y)
		&& (x < button->x + button->width)
		&& (y < button->y + button->height)
		)
	{

		float centerx = button->x + button->width / 2.0f;
		float centery = button->y + button->height / 2.0f;
		float dx = (float)fabs(x - centerx);
		float dy = (float)fabs(y - centery);
		float interWidth = button->width / 2.0f - button->radius;
		float interHeight = button->height / 2.0f - button->radius;

		// 点不在圆角空白处 ()
		if (!((dx > interWidth)
			&& (dy > interHeight)
			&& ((dx - interWidth) * (dx - interWidth) + (dy - interHeight) * (dy - interHeight)
					> button->radius * button->radius)
			)
			)
		{
			inside = true;
		}
	}

	return inside;
}