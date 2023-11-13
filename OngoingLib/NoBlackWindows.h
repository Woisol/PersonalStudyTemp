//PT 2023-11-12 18:12
//About:NoBlackWindows:先搞出窗体再搞其他吧你……
#define nscanf(format,variable) sscanf(inputBox.content, format, variable);
#define nprintf(format,variable) sprintf(msgBox.content, format, variable);//注意宏定义函数与普通函数不一样只是直接替换所以不用也不要写类型名！
//EOF 2023-11-13 13:47
#include<stdio.h>
#include"GraphicsWidget.h"
//所以正确的思路应该是先用矩形大致定好布局先吧………………
struct InputBox inputBox;
struct MsgBox msgBox;
struct SlideBar slideBar;
struct Button confirmButton, clearButton, rebotButton;
// int main();
void layoutTest(void)
{

}
// void inputBox()
void confirmButtonEffect()
{
	fprintf(stdin, "%s\n", msgBox.content);
}
void clearButtonEffect()
{
	strcpy(inputBox.content, "");
	strcpy(msgBox.content, "");
}
void rebotButtonEffect(void(*newMain)())
{
	strcpy(inputBox.content, "");
	newMain();//从没想过居然要在前面声明一下main………………
	// goto Rebot;//看来goto并不能跨函数…………
}
void egeNoBlackWindows(void (*newMain)())
{
	// layoutTest();
Rebot:
	egeInitInputBox(&inputBox, 20, 20, 310, 650, 10);
	egeInitMsgBox(&msgBox, 370, 20, 610, 650, 10);
	egeInitSlideBar(&slideBar, 20, 730, 778, 20, 10);
	egeInitButton(&confirmButton, 800, 700, 100, 80, 10);
	egeInitButton(&clearButton, 910, 700, 70, 35, 10);
	egeInitButton(&rebotButton, 910, 745, 70, 35, 10);
	char foucs = -1;
	mouse_msg mmsg;
	key_msg kbKey;

	egeWindowInition("NoBlackWindows!", 1000, 800, 1000, 1000);
	line(350, 40, 350, 650);
	egeDrawInputBox(&inputBox);
	egeDrawMsgBox(&msgBox);
	egeDrawSlideBar(&slideBar);
	egeDrawButton(&confirmButton, EGERGB(255, 240, 240), L"确认(Enter)");
	egeDrawButton(&clearButton, EGERGB(255, 240, 240), L"清屏(Esc)");
	egeDrawButton(&rebotButton, EGERGB(255, 240, 240), L"重启");
	for (;is_run();delay_fps(FPS))//改成FPS_FULL可以改善Hover延迟，但是依然存在
	{
		if (mousemsg())//注意把判断放在外面避免重复判断//这个改成if就不会闪黑了但是会反应慢一些……
			//其实考虑按钮位置也应该先判断，避免重复判断了
		{
			mmsg = getmouse();
			egeButtonEffect(&confirmButton, &mmsg, L"确认(Enter)", L"确认(Enter)", EGERGB(255, 240, 240), EGERGB(240, 220, 220), newMain);//没有办法confirmButtonEffect(newMain)……只能zh
			egeButtonEffect(&clearButton, &mmsg, L"清屏(Esc)", L"清屏(Esc)", EGERGB(255, 240, 240), EGERGB(240, 220, 220), clearButtonEffect);
			egeButtonEffect(&rebotButton, &mmsg, L"重启", L"重启", EGERGB(255, 240, 240), EGERGB(240, 220, 220), newMain);//注意不要有()…………
		}
		egeSlideBarEffect(&slideBar, inputBox.content, &mmsg, &inputBox);
		// if (kbmsg()) { kbKey = getkey(); }//外界的刷新依然必要

		// if (kbhit())//所以kbmsg和kbhit还有区别！这里必须用kbhit（也是windows下的比较官方的函数了）
			//但是依然存在按下按键后才能响应鼠标的问题…………麻了
		{
			egeInputBoxEffect(&inputBox, newMain, clearButtonEffect);
			egeDrawInputBox(&inputBox);
			egeDrawMsgBox(&msgBox);//艹麻了你之前一直没有刷新这个…………
		}
	}
	// getchar();
	closegraph();
}
//EOF 2023-11-12 20:25：做好了布局，实现了多按钮！！！
//EOF 2023-11-12 20:51：几乎完美实现多按钮！！！
//EOF 2023-11-12 21:48：基本实现输入功能和按钮的兼容，但是依然存在按下按键才能响应鼠标的问题，目前暂时无法修复。不是吧跑个窗口怎么这么热哈哈
//EOF 2023-11-12 22:02：现在又出现闪黑的问题了………………
//EOF 2023-11-13 16:11：得啦！！！！！滚动条完美兼容！！！！！！现在就差recprintf的问题已经完美打到预期啦！！！！