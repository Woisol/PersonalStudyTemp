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
//PT 2023-11-11 15:02
//About:ege个人库的简单（划去）使用
//About:ege按钮实现
// #include<stdio.h>
// #include<time.h>
// // #include <graphics.h>
// #include"GraphicsWidget.h"
// int main(void)
// {
// 	int timerPress = 0, timerHover = 0;
	// struct RoundRectButton testButton1;
	// egeWindowInition("EgeWindowsWidgetTest", 600, 400, 1);
	// movewindow(1000, 1000, false);
// 	egeInitRoundRectButton(&testButton1, 250, 150, 100, 50, 20);
// 	egeDrawButton(&testButton1, YELLOW, L"Test");//这两个是不是应该合成一个好一点……
// 	//啊啊啊！！注意在ege里面颜色的值不常规！要用EGERGB！！！
// 	mouse_msg mmsg;
// 	for (;is_run();delay_fps(FPS), (timerPress > 0 ? timerPress-- : 0))
// 	{
// 		if (!egeIsInsideRoundRectButton(&testButton1, mmsg.x, mmsg.y) && timerHover == 0)//为什么没有自动补写了？？
// 		{
// 			// cleardevice();//可以直接覆盖！
// 			egeInitRoundRectButton(&testButton1, 250, 150, 100, 50, 20);
// 			egeDrawButton(&testButton1, YELLOW, L"Test");//这两个是不是应该合成一个好一点……
// 			delay_ms(0);
// 		}
// 		while (mousemsg() && is_run())
// 		{
// 			mmsg = getmouse();
// 			if (egeIsInsideRoundRectButton(&testButton1, mmsg.x, mmsg.y))//为什么没有自动补写了？？
// 			{
// 				// cleardevice();
// 				egeDrawButton(&testButton1, EGERGB(255, 255, 150), L"Test");//似乎无法通过再次画图覆盖原本的……
// 				// xyprintf(20, 10, "Freshed");
// 				delay_ms(0);
// 				if (mmsg.is_left() && mmsg.is_down())
// 				{
// 					settextjustify(CENTER_TEXT, CENTER_TEXT);
// 					xyprintf(300, 300, "You Press The Button!");
// 					// if(!mousemsg();)//暂时想不到如何解决按多次按钮后延长响应的问题//？！多线程？！变量？算了先实现基础的先//搞出来啦！挺容易的啦（bushi）
// 					// delay_ms(2000);
// 					timerPress = 100;//计算负担很大，这个地方不能简单看成是ms！差远啦！
// 				}
// 			}
// 		}
// 		if (timerPress == 0)//艹又犯了==和=的问题…………
// 		{
// 			setcolor(WHITE);
// 			xyprintf(300, 300, "You Press The Button!");
// 			setcolor(BLACK);//刚受到的启发，绘图是改变每个像素点，所以只要把原来的画掉就行
// 		}

// 	}
// 	closegraph();
// 	return 0;
// }
//EOF 2023-11-11 17:07：好耶实现了生成按钮，按下事件以及悬浮事件！！！
//EOF 2023-11-11 17:35：好耶！！！完美实现原有设想！现在按几次都是按最后一次的差不多那么多秒后消失了！


//PT 2023-11-11 17:46
//About:ege滚动条实现
#include<stdio.h>
#include"GraphicsWidget.h"
char oW1, oW2, oW3;
int main(void)
{
	egeWindowInition("SlideBar", 600, 400, 1);
	movewindow(1000, 1000, false);

	mouse_msg mmsg;
	struct SlideBar slideBar;
	egeInitSlideBar(&slideBar, 100, 190, 400, 20, 5, false);

	setfillcolor(LIGHTGRAY);
	for (;is_run();delay_fps(FPS))
	{
		// cleardevice();
		// setfillcolor(WHITE);
		// ege_fillrect(80, 190, 420, 20);
		// egeDrawRoundRec(slideBar.x, slideBar.y, slideBar.width, slideBar.height, slideBar.radius, LIGHTGRAY);
		// egeDrawRoundRec(slideBar.x, slideBar.y, slideBar.value, slideBar.height, slideBar.radius, DARKGRAY);
		egeDrawSlideBar(&slideBar);
		while (mousemsg())
		{
			mmsg = getmouse();//(oW1 = mmsg.is_left()) &&
			if (!(mmsg.is_left() && mmsg.is_down())) { continue; }
			while (egeIsInsideSlidBar(&slideBar, mmsg.x, mmsg.y))
				//好吧估计is_left只是按下那时的消息而已……
			{
				slideBar.value = mmsg.x - slideBar.x;
				// cleardevice();//不过用这个感觉会有点卡顿
				// egeDrawRoundRec(slideBar.x, slideBar.y, slideBar.width, slideBar.height, slideBar.radius, LIGHTGRAY);
				// egeDrawRoundRec(slideBar.x, slideBar.y, slideBar.value, slideBar.height, slideBar.radius, DARKGRAY);
				egeDrawSlideBar(&slideBar)
					mmsg = getmouse();//这种内部循环的一定注意更新数据！

				setfillcolor(WHITE);
				ege_fillrect(260, 280, 80, 40);
				setfillcolor(TRANSPARENT);
				settextjustify(CENTER_TEXT, CENTER_TEXT);
				xyprintf(300, 300, "Value:%-4d", slideBar.value);
				delay_ms(0);//不用这个以后反而变快了//不过用这个有一种奇妙的延迟感也挺好玩哈哈
				if (mmsg.is_left() && mmsg.is_up()) { break; }
			}
		}

	}
	return 0;
}
//EOF 2023-11-11 19:45：！！！！！完美实现目标！！！超好看！！！
//EOF 2023-11-11 20:04：！！！再次（？）完美实现目标！现在可以显示值啦！！！
//wok搞出这个是真的兴奋哈哈哈！！！比搞出按钮更甚一些！！！