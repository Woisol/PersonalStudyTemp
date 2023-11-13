#define NBWscanf(format,variable) sscanf(inputBox.content, format, variable);
#define NBWprintf(format,variable) sprintf(msgBox.content, format, variable);//注意宏定义函数与普通函数不一样只是直接替换所以不用也不要写类型名！

#include<stdio.h>
#include"GraphicsWidget.h"
struct InputBox inputBox;
struct MsgBox msgBox;
struct Button confirmButton, clearButton, rebotButton;
void layoutTest(void)
{

}
void confirmButtonEffect()
{
	fprintf(stdin, "%s\n", msgBox.content);
}
void clearButtonEffect()
{
	strcpy(inputBox.content, "");
}
void rebotButtonEffect(void(*newMain)())
{
	strcpy(inputBox.content, "");
	newMain();
}
void egeNoBlackWindows(void (*newMain)())
{
Rebot:
	egeInitInputBox(&inputBox, 20, 20, 310, 650, 10);
	egeInitMsgBox(&msgBox, 370, 20, 610, 650, 10);
	egeInitButton(&confirmButton, 800, 700, 100, 80, 10);
	egeInitButton(&clearButton, 910, 700, 70, 35, 10);
	egeInitButton(&rebotButton, 910, 745, 70, 35, 10);
	char foucs = -1;
	mouse_msg mmsg;
	key_msg kbKey;

	egeWindowInition("NoBlackWindows!", 1000, 800, 1000, 1000);
	egeDrawInputBox(&inputBox);
	egeDrawMsgBox(&msgBox);
	egeDrawButton(&confirmButton, EGERGB(255, 240, 240), L"确认");
	egeDrawButton(&clearButton, EGERGB(255, 240, 240), L"清屏");
	egeDrawButton(&rebotButton, EGERGB(255, 240, 240), L"重启");
	for (;is_run();delay_fps(FPS))
	{
		if (mousemsg())
		{
			mmsg = getmouse();
			egeButtonEffect(&confirmButton, &mmsg, L"确认", L"确认", EGERGB(255, 240, 240), EGERGB(240, 220, 220), newMain);
			egeButtonEffect(&clearButton, &mmsg, L"清屏", L"清屏", EGERGB(255, 240, 240), EGERGB(240, 220, 220), clearButtonEffect);
			egeButtonEffect(&rebotButton, &mmsg, L"重启", L"重启", EGERGB(255, 240, 240), EGERGB(240, 220, 220), newMain);
		}
		{
			egeInputBoxEffect(&inputBox);
			egeDrawMsgBox(&msgBox);
		}
	}
	closegraph();
}
