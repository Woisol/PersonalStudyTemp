//主要参考了https://blog.csdn.net/qq_39151563/article/details/114607800
// #define RoundRectButton 0
#include<graphics.h>
#include<stdbool.h>
#include<math.h>

#define FPS_FULL 165
#define FPS_COMMON 60
#define FPS 120

/*----------------------------结构体-----------------------------------------------------*/
struct RoundRectButton
{
	int x, y;
	int width, height;
	double radius;
}
button;
struct SlideBar
{
	int x, y;
	int width, height;
	double radius;
	int value;
	bool isVertical;
}slideBar;

/*----------------------------窗口类-----------------------------------------------------*/
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

/*----------------------------画图类-----------------------------------------------------*/
void egeBarWithBondery(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2)
{
	line(x1, y1, x2, y1);
	line(x2, y1, x2, y2);
	line(x2, y2, x1, y2);
	line(x1, y2, x1, y1);
}
void egeDrawRoundRec(int x, int y, int width, int height, double radius, color_t color)
{
	setfillcolor(color);
	setbkcolor(WHITE);

	ege_fillrect((double)(x + radius), (double)(y),
		(double)(width - 2 * radius), double(height)
	);

	ege_fillrect((double)(x), (double)(y + radius),
		(double)(radius), (double)(height - 2 * radius)
	);

	ege_fillrect((double)(x + width - radius),
		(double)(y + radius),
		(double)(radius), (double)(height - 2 * radius)
	);
	// delay_fps(0);


	double diameter = 2 * radius;
	double dx = width - diameter;
	double dy = height - diameter;
	// delay_fps(0);


	ege_fillpie((double)(x + dx), (double)(y + dy), diameter, diameter, 0.0f, 90.0f);
	ege_fillpie((double)(x), (double)(y + dy), diameter, diameter, 90.0f, 90.0f);
	ege_fillpie((double)(x), (double)(y), diameter, diameter, 180.0f, 90.0f);
	ege_fillpie((double)(x + dx), (double)(y), diameter, diameter, 270.0f, 90.0f);
	//这里的作图思路是先填充上下和中间的矩形，到两边的矩形，最后才填充圆。
}

/*----------------------------按钮类-----------------------------------------------------*/
void egeInitRoundRectButton(struct RoundRectButton* button, int x, int y, int width, int height, double radius)
{
	button->x = x;
	button->y = y;
	button->width = width;
	button->height = height;
	button->radius = radius;//md又犯了传形参的错误……
}
void egeDrawButton(const RoundRectButton* button, color_t color, wchar_t title[])
{
	egeDrawRoundRec(button->x, button->y, button->width, button->height, button->radius, color);

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

		double centerx = button->x + button->width / 2.0f;
		double centery = button->y + button->height / 2.0f;
		double dx = (double)fabs(x - centerx);
		double dy = (double)fabs(y - centery);
		double interWidth = button->width / 2.0f - button->radius;
		double interHeight = button->height / 2.0f - button->radius;

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
/*----------------------------滑块类-----------------------------------------------------*/

void egeInitSlideBar(struct SlideBar* slideBar, int x, int y, int width, int height, double radius, bool isVertical = 0, int defaultValue = 10)
{
	slideBar->x = x;
	slideBar->y = y;
	slideBar->width = width;
	slideBar->height = height;
	slideBar->radius = radius;//md又犯了传形参的错误……
	slideBar->isVertical = isVertical;
	slideBar->value = defaultValue;
}
void egeDrawSlideBar(struct SlideBar* slideBar)
{
	setfillcolor(WHITE);
	ege_fillrect(slideBar->x - 10, slideBar->y, slideBar->width + 10, slideBar->height);
	egeDrawRoundRec(slideBar->x, slideBar->y, slideBar->width, slideBar->height, slideBar->radius, LIGHTGRAY);
	egeDrawRoundRec(slideBar->x, slideBar->y, slideBar->value, slideBar->height, slideBar->radius, DARKGRAY);

}
bool egeIsInsideSlidBar(struct SlideBar* slideBar, int x, int y)
{
	if (x > slideBar->x && x < slideBar->x + slideBar->width && y > slideBar->y && y < slideBar->y + slideBar->height)
	{
		return true;
	}
	return false;
}
