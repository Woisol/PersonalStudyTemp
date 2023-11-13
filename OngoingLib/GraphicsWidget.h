//PT 2023-11-12 21:04
//About:更新了按钮和输入框的事件
//主要参考了https://blog.csdn.net/qq_39151563/article/details/114607800
// #define RoundRectButton 0
#include<graphics.h>
// #include<conio.h>
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
void egeInitButton(struct Button* button, int x, int y, int width, int height, double radius)
{
	button->x = x;
	button->y = y;
	button->width = width;
	button->height = height;
	button->radius = radius;//md又犯了传形参的错误……
}
void egeDrawButton(const Button* button, color_t color, wchar_t title[])
{
	egeDrawRoundRec(button->x, button->y, button->width, button->height, button->radius, color);

	settextjustify(CENTER_TEXT, CENTER_TEXT);
	setbkcolor(TRANSPARENT);
	outtextxy(button->x + button->width / 2, button->y + button->height / 2, title);
	setbkcolor(WHITE);
	// delay_fps(0);
		//这里大改了，原本还要在这里再次定义颜色和title的
	//艹乱改，改了就无法悬浮了………………人家官方这样做是有道理的！

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
		// delay_ms(0);
	}
	// while (mousemsg() && is_run())
	// {
	// 	*mmsg = getmouse();//定位了问题，在于getmouse会读掉现有的本应给另一个按钮的消息，而且似乎没有消息会让mmsg的xy清零！
	if (egeIsInsideButton(button, mmsg->x, mmsg->y))
	{
		egeDrawButton(button, hoveredColor, pressedTitle);
		// delay_ms(0);
		if (mmsg->is_left() && mmsg->is_down())
		{
			pressedFunction();
		}
	}
	// }
	// delay_ms(0);//减少刷新，但是是必要的。
}
void egeButtonPressedEffect(const Button* button, wchar_t* originalTitle, wchar_t* pressedTitle, color_t originalColor, color_t hoveredColor, void(*pressedFunction)())
{
	egeDrawButton(button, hoveredColor, pressedTitle);
	pressedFunction();
	Sleep(200);
	egeDrawButton(button, originalColor, originalTitle);
}//算了下面又要加一个button结构体……算了算了艹

/*----------------------------输入框类-----------------------------------------------------*/
void egeInitInputBox(struct InputBox* inputBox, int x, int y, int width, int height, double radius)
{
	inputBox->x = x;
	inputBox->y = y;
	inputBox->width = width;
	inputBox->height = height;
	inputBox->radius = radius;
	// inputBox->content = { 0 };//数组这样初始化只能在定义的时候！
}
void egeDrawInputBox(struct InputBox* inputBox)
{
	setfillcolor(WHITE);
	ege_fillrect(inputBox->x, inputBox->y, inputBox->width, inputBox->height);
	egeDrawRoundRec(inputBox->x, inputBox->y, inputBox->width, inputBox->height, inputBox->radius, EGERGB(240, 240, 240));
	// settextjustify(LEFT_TEXT, TOP_TEXT);//无法修改，改了更加离谱……
	rectprintf(inputBox->x + inputBox->radius, inputBox->y + inputBox->radius, inputBox->width - 2 * inputBox->radius, inputBox->height - 2 * inputBox->radius, "%s", inputBox->content);
}
void egeInputBoxEffect(struct InputBox* inputBox, void(*newMain)(), void (*clearButtonEffect)())
{
	static char tempString[2] = { 0 };
	// while (kbmsg() && is_run())
	if (kbhit())
	{
		tempString[0] = getch();
		// flushkey();
		switch (tempString[0])
		{
		case key_back:if (strcmp(inputBox->content, "")) { inputBox->content[strlen(inputBox->content) - 1] = '\0'; }break;
		case key_enter:newMain();break;
		case key_esc:clearButtonEffect();break;
		default:strcat(inputBox->content, tempString);//, 150 - sizeof(inputBox.content)
		}
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
	// settextjustify(LEFT_TEXT, TOP_TEXT);
	rectprintf(msgBox->x + msgBox->radius, msgBox->y + msgBox->radius, msgBox->width - msgBox->radius, msgBox->height - msgBox->radius, "%s", msgBox->content);
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
void egeSlideBarEffect(struct SlideBar* slideBar, char* output, mouse_msg* mmsg, struct InputBox* inputBox = NULL)
//大补丁哈哈哈
{
	char tempString[10] = { 0 };
	if (!(mmsg->is_left() && mmsg->is_down())) { return; }
	mouse_msg immsg = getmouse();//被迫加了个内部另外的mmsg哈哈哈不过终于能跑啦！！！！
	while (egeIsInsideSlidBar(slideBar, immsg.x, immsg.y))
	{
		slideBar->value = immsg.x - slideBar->x;
		egeDrawRoundRec(slideBar->x, slideBar->y, slideBar->width, slideBar->height, slideBar->radius, LIGHTGRAY);
		egeDrawRoundRec(slideBar->x, slideBar->y, slideBar->value, slideBar->height, slideBar->radius, DARKGRAY);
		egeDrawSlideBar(slideBar);
		immsg = getmouse();//这里如果不能在内部刷新的话就不要while了

		itoa(slideBar->value, tempString, 10);
		strcpy(output, tempString);
		if (inputBox != NULL) { egeDrawInputBox(inputBox); delay_ms(0); }
		if (immsg.is_left() && immsg.is_up()) { break; }
	}
}


