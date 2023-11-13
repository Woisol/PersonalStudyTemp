//BOF 2023-11-06
//PT 2023-11-06 15:12
//About:重新温习ege以及相关学习的测试
// #include<stdio.h>
// #include<graphics.h>
// int main(void)
// {
// 	initgraph(600, 300, INIT_RENDERMANUAL);
// 	setbkcolor(WHITE);

// 	return 0;
// }

//PT 2023-11-06 16:14
//About:ege个人库测试//最终也只是能调用了而已
// #include<stdio.h>
// #include"GraphicsWidget.h"
// int main(void)
// {
// 		return 0;
// }

//##################################################################################
//PT 2023-11-12 18:12
//About:NoBlackWindows:先搞出窗体再搞其他吧你……
// #include<stdio.h>
// #include"GraphicsWidget.h"
// //所以正确的思路应该是先用矩形大致定好布局先吧………………
// struct InputBox inputBox;
// struct MsgBox msgBox;
// struct Button confirmButton, clearButton, rebotButton;
// int main();
// void layoutTest(void)
// {
// 	egeWindowInition("layoutTest", 1000, 800, 500, 500);
// 	egeDrawRoundRec(20, 20, 310, 650, 10, LIGHTGRAY);//inputBox
// 	egeDrawRoundRec(370, 20, 610, 650, 10, LIGHTGRAY);//outputBox
// 	line(350, 40, 350, 630);//分割线
// 	egeDrawRoundRec(800, 700, 100, 80, 10, LIGHTGRAY);
// 	egeDrawRoundRec(910, 700, 70, 35, 10, LIGHTGRAY);
// 	egeDrawRoundRec(910, 745, 70, 35, 10, LIGHTGRAY);
// }
// // void inputBox()
// void confirmButtonEffect()
// {

// }
// void clearButtonEffect()
// {
// 	strcpy(inputBox.content, "");
// }
// void rebotButtonEffect()
// {
// 	main();//从没想过居然要在前面声明一下main………………
// 	// goto Rebot;//看来goto并不能跨函数…………
// }
// int main(void)
// {
// 	// layoutTest();
// Rebot:
// 	egeInitInputBox(&inputBox, 20, 20, 310, 650, 10);
// 	egeInitMsgBox(&msgBox, 370, 20, 610, 650, 10);
// 	egeInitButton(&confirmButton, 800, 700, 100, 80, 10);
// 	egeInitButton(&clearButton, 910, 700, 70, 35, 10);
// 	egeInitButton(&rebotButton, 910, 745, 70, 35, 10);
// 	char foucs = -1;
// 	mouse_msg mmsg;
// 	key_msg kbKey;

// 	egeWindowInition("NoBlackWindows!", 1000, 800, 1000, 1000);
// 	egeDrawInputBox(&inputBox);
// 	egeDrawMsgBox(&msgBox);
// 	egeDrawButton(&confirmButton, EGERGB(255, 240, 240), L"确认");
// 	egeDrawButton(&clearButton, EGERGB(255, 240, 240), L"清屏");
// 	egeDrawButton(&rebotButton, EGERGB(255, 240, 240), L"重启");
// 	for (;is_run();delay_fps(FPS))//改成FPS_FULL可以改善Hover延迟，但是依然存在
// 	{
// 		if (mousemsg())//注意把判断放在外面避免重复判断//注意不要用while会闪黑
// 			//其实考虑按钮位置也应该先判断，避免重复判断了
// 		{
// 			mmsg = getmouse();
// 			egeButtonEffect(&confirmButton, &mmsg, L"确认", L"确认", EGERGB(255, 240, 240), EGERGB(240, 220, 220), confirmButtonEffect);
// 			egeButtonEffect(&clearButton, &mmsg, L"清屏", L"清屏", EGERGB(255, 240, 240), EGERGB(240, 220, 220), clearButtonEffect);
// 			egeButtonEffect(&rebotButton, &mmsg, L"重启", L"重启", EGERGB(255, 240, 240), EGERGB(240, 220, 220), rebotButtonEffect);
// 		}
// 		// if (kbmsg()) { kbKey = getkey(); }//外界的刷新依然必要

// 		if (kbhit())//所以kbmsg和kbhit还有区别！这里必须用kbhit（也是windows下的比较官方的函数了）
// 			//但是依然存在按下按键后才能响应鼠标的问题…………麻了
// 		{
// 			egeInputBoxEffect(&inputBox);
// 		}
// 	}
// 	// getchar();
// 	closegraph();
// 	return 0;
// }
//EOF 2023-11-12 20:25：做好了布局，实现了多按钮！！！
//EOF 2023-11-12 20:51：几乎完美实现多按钮！！！
//EOF 2023-11-12 21:48：基本实现输入功能和按钮的兼容，但是依然存在按下按键才能响应鼠标的问题，目前暂时无法修复。不是吧跑个窗口怎么这么热哈哈
//EOF 2023-11-12 22:02：现在又出现闪黑的问题了………………

//PT 2023-11-12 23:34
//About:与一般代码的兼容性测试
#include"NoBlackWindows.h"
void newMain(void)
{
	// FILE* file;
	// // char Dir[50] = { 0 };
	// // strcpy(Dir, "${workspaceFolder}/input.txt");printf("%s", Dir);
	// if ((file = fopen(strcat(), "w")) == NULL) { perror("无法打开文件"); }
	// fprintf(file, "%s\n", inputBox.content);
	//woq傻了家人们，为什么要用文件传递啊？用字符串不行？！！

	int a = 0;
	// sscanf(inputBox.content, "%d", &a);
	// sprintf(msgBox.content, "%d", a);
	NBWscanf("%d", &a);
	NBWprintf("%d", a)
}
int main(void) { egeNoBlackWindows(newMain);return 0; }
//先等等，现在为什么可以及时反应清屏了？？？诶诶真奇怪上面那次的代码就必须输入才能清屏，真奇怪
//EOF 2023-11-13 00:06：不管了现在就差把数据输进stdin……看看什么情况睡了
//EOF 2023-11-13 13:29：现在改成借由另一个文件输入又不能及时清屏了……
//EOF 2023-11-13 13:47：基本大功告成！！！可以使用了！！！

//##################################################################################
//PT 2023-11-13 12:45
//About:关于写入stdin的测试
// #include<stdio.h>
// #include"FileRead.h"
// int main(void)
// {
// 	// fprintf(stdin, "Test\n");
// 	// fputc('T', stdin);
// 	//两个都无法输入…………艹麻了，新建文件算了你……
// 	fileReadAll(stdin, stdout);//这里输出用stdout起码还能有反应只是没有输出输入的字符，stdin就完全没有反应了
// 	return 0;
// }

//PT 2023-11-13 14:11
//About:重新编写ccheadin
// #include"NoBlackWindows.h"
// void newMain(void)
// {
// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }

//PT 2023-11-13 14:14
//About:NBWHeaing V1.0
// #include"NoBlackWindows.h"
// void newMain(void)
// {

// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }
//PT 2023-11-13 13:35
//About:关于获取文件路径……
// #include<stdio.h>
// #include<direct.h>
// int main(void)
// {
// 	return 0;
// }