#include<graphics.h>
#include<stdbool.h>
#include<math.h>

#define FPS_FULL 165
#define FPS_COMMON 60
#define FPS 120

/*----------------------------结构体-----------------------------------------------------*/
struct Button
{
	int x, y;
	int width, height;
	double radius;
	int timerHover = 0;
};

struct SlideBar
{
	int x, y;
	int width, height;
	double radius;
	int value;
	bool isVertical;
};
struct InputBox
{
	int x, y;
	int width, height;
	double radius;
	char content[150] = { 0 };
};
struct MsgBox
{
	int x, y;
	int width, height;
	double radius;
	char content[150] = { 0 };
};

/*----------------------------窗口类-----------------------------------------------------*/
void egeWindowInition(const char* caption, const int winWidth, const int winHeight, const int x, const int y, bool debug = 0)
{
	if (debug == 0) { setinitmode(INIT_RENDERMANUAL, x, y); }
	else { setinitmode(INIT_NOFORCEEXIT, x, y); }
	setcaption(caption);
	initgraph(winWidth, winHeight, 0);
	setbkcolor(WHITE);

	setcolor(BLACK);
	setbkmode(TRANSPARENT);
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


	double diameter = 2 * radius;
	double dx = width - diameter;
	double dy = height - diameter;


	ege_fillpie((double)(x + dx), (double)(y + dy), diameter, diameter, 0.0f, 90.0f);
	ege_fillpie((double)(x), (double)(y + dy), diameter, diameter, 90.0f, 90.0f);
	ege_fillpie((double)(x), (double)(y), diameter, diameter, 180.0f, 90.0f);
	ege_fillpie((double)(x + dx), (double)(y), diameter, diameter, 270.0f, 90.0f);
}

/*----------------------------按钮类-----------------------------------------------------*/
void egeInitButton(struct Button* button, int x, int y, int width, int height, double radius)
{
	button->x = x;
	button->y = y;
	button->width = width;
	button->height = height;
	button->radius = radius;
}
void egeDrawButton(const Button* button, color_t color, wchar_t title[])
{
	egeDrawRoundRec(button->x, button->y, button->width, button->height, button->radius, color);

	settextjustify(CENTER_TEXT, CENTER_TEXT);
	setbkcolor(TRANSPARENT);
	outtextxy(button->x + button->width / 2, button->y + button->height / 2, title);
	setbkcolor(WHITE);
}

bool egeIsInsideButton(const Button* button, int x, int y)
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
void egeButtonEffect(const Button* button, mouse_msg* mmsg, wchar_t* originalTitle, wchar_t* pressedTitle, color_t originalColor, color_t hoveredColor, void(*pressedFunction)())
{
	if (!egeIsInsideButton(button, mmsg->x, mmsg->y) && button->timerHover == 0)
	{
		egeDrawButton(button, originalColor, originalTitle);
	}
	if (egeIsInsideButton(button, mmsg->x, mmsg->y))
	{
		egeDrawButton(button, hoveredColor, pressedTitle);
		if (mmsg->is_left() && mmsg->is_down())
		{
			pressedFunction();
		}
	}
	// }
}
/*----------------------------滑块类-----------------------------------------------------*/

void egeInitSlideBar(struct SlideBar* slideBar, int x, int y, int width, int height, double radius, bool isVertical = 0, int defaultValue = 10)
{
	slideBar->x = x;
	slideBar->y = y;
	slideBar->width = width;
	slideBar->height = height;
	slideBar->radius = radius;
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
/*----------------------------输入框类-----------------------------------------------------*/
void egeInitInputBox(struct InputBox* inputBox, int x, int y, int width, int height, double radius)
{
	inputBox->x = x;
	inputBox->y = y;
	inputBox->width = width;
	inputBox->height = height;
	inputBox->radius = radius;
}
void egeDrawInputBox(struct InputBox* inputBox)
{
	setfillcolor(WHITE);
	ege_fillrect(inputBox->x, inputBox->y, inputBox->width, inputBox->height);
	egeDrawRoundRec(inputBox->x, inputBox->y, inputBox->width, inputBox->height, inputBox->radius, EGERGB(240, 240, 240));
	rectprintf(inputBox->x + inputBox->radius, inputBox->y + inputBox->radius, inputBox->width - inputBox->radius, inputBox->height - inputBox->radius, "%s", inputBox->content);
}
void egeInputBoxEffect(struct InputBox* inputBox)
{
	static char tempString[2] = { 0 };
	if (kbhit())
	{
		tempString[0] = getch();
		switch (tempString[0])
		{
		case key_back:inputBox->content[strlen(inputBox->content) - 1] = '\0';break;
		case key_enter:break;
		default:strcat(inputBox->content, tempString);
		}
		egeDrawInputBox(inputBox);
	}

}

/*----------------------------文本框类-----------------------------------------------------*/
void egeInitMsgBox(struct MsgBox* msgBox, int x, int y, int width, int height, double radius)
{
	msgBox->x = x;
	msgBox->y = y;
	msgBox->width = width;
	msgBox->height = height;
	msgBox->radius = radius;
}
void egeDrawMsgBox(struct MsgBox* msgBox)
{
	setfillcolor(WHITE);
	ege_fillrect(msgBox->x, msgBox->y, msgBox->width, msgBox->height);
	egeDrawRoundRec(msgBox->x, msgBox->y, msgBox->width, msgBox->height, msgBox->radius, EGERGB(240, 240, 240));
	rectprintf(msgBox->x + msgBox->radius, msgBox->y + msgBox->radius, msgBox->width - msgBox->radius, msgBox->height - msgBox->radius, "%s", msgBox->content);
}
