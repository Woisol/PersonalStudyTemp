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
void egeWindowInition(const char* caption, const int winWidth, const int winHeight, const int x, const int y, bool debug = 0);

/*----------------------------画图类-----------------------------------------------------*/
void egeBarWithBondery(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);
void egeDrawRoundRec(int x, int y, int width, int height, double radius, color_t color);

/*----------------------------按钮类-----------------------------------------------------*/
void egeInitButton(struct Button* button, int x, int y, int width, int height, double radius);
void egeDrawButton(const Button* button, color_t color, wchar_t title[]);
bool egeIsInsideButton(const Button* button, int x, int y);
void egeButtonEffect(const Button* button, mouse_msg* mmsg, wchar_t* originalTitle, wchar_t* pressedTitle, color_t originalColor, color_t hoveredColor, void(*pressedFunction)());
void egeButtonPressedEffect(const Button* button, wchar_t* originalTitle, wchar_t* pressedTitle, color_t originalColor, color_t hoveredColor, void(*pressedFunction)());

/*----------------------------输入框类-----------------------------------------------------*/
void egeInitInputBox(struct InputBox* inputBox, int x, int y, int width, int height, double radius);
void egeDrawInputBox(struct InputBox* inputBox);
void egeInputBoxEffect(struct InputBox* inputBox, void(*newMain)(), void (*clearButtonEffect)());

/*----------------------------文本框类-----------------------------------------------------*/
void egeInitMsgBox(struct MsgBox* msgBox, int x, int y, int width, int height, double radius);
void egeDrawMsgBox(struct MsgBox* msgBox);

/*----------------------------滑块类-----------------------------------------------------*/
void egeInitSlideBar(struct SlideBar* slideBar, int x, int y, int width, int height, double radius, bool isVertical = 0, int defaultValue = 10);
void egeDrawSlideBar(struct SlideBar* slideBar);
bool egeIsInsideSlidBar(struct SlideBar* slideBar, int x, int y);
void egeSlideBarEffect(struct SlideBar* slideBar, char* output, mouse_msg* mmsg, struct InputBox* inputBox = NULL);