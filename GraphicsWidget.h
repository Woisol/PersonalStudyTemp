//主要参考了https://blog.csdn.net/qq_39151563/article/details/114607800
// #define RoundRectButton 0
#include<graphics.h>
#include<stdbool.h>
#include<math.h>

struct RoundRectButton
{
	int x, y;
	int width, height;
	float radius;
} \
button;

void egeWindowInition(const char* caption, const int winWidth, const int winHeight)
{
	setinitmode(INIT_NOFORCEEXIT);
	// setinitmode(INIT_RENDERMANUAL);
	setcaption(caption);
	initgraph(winWidth, winHeight, INIT_RENDERMANUAL); // 这个0是用来加入ege自己的开场动画的，为1时在debug时无在release时有
	setbkcolor(WHITE);								   // 注意这个是在initgraph之后搞的！

	// setcolor(BLACK);
	// setbkmode(TRANSPARENT);
}

void egeDrawButton(const RoundRectButton* button, color_t color, char* title)
{
	setfillcolor(color);

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


	float diameter = 2 * button->radius;
	float dx = button->width - diameter;
	float dy = button->height - diameter;


	ege_fillpie((float)(button->x + dx), (float)(button->y + dy), diameter, diameter, 0.0f, 90.0f);
	ege_fillpie((float)(button->x), (float)(button->y + dy), diameter, diameter, 90.0f, 90.0f);
	ege_fillpie((float)(button->x), (float)(button->y), diameter, diameter, 180.0f, 90.0f);
	ege_fillpie((float)(button->x + dx), (float)(button->y), diameter, diameter, 270.0f, 90.0f);
	//这里的作图思路是先填充上下和中间的矩形，到两边的矩形，最后才填充圆。

	outtextxy(button->x, button->y, title);
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