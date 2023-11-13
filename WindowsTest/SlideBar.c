//PT 2023-11-11 17:46
//About:ege滚动条实现
#include<stdio.h>
#include"GraphicsWidget.h"
char oW1, oW2, oW3;
int main(void)
{
	egeWindowInition("SlideBar", 600, 400, 1, 1000, 1000);

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
				//试图实现不突变未果
				// for (;mmsg.x > slideBar.value + slideBar.x;delay_ms(0))
				// {
				// 	slideBar.value++;
				// 	egeDrawSlideBar(&slideBar);
				// 	if (mousemsg())
				// 	{
				// 		mmsg = getmouse();
				// 	}//这种内部循环的一定注意更新数据！

				// 	setfillcolor(WHITE);
				// 	ege_fillrect(260, 280, 80, 40);
				// 	setfillcolor(TRANSPARENT);
				// 	settextjustify(CENTER_TEXT, CENTER_TEXT);
				// 	xyprintf(300, 300, "Value:%-4d", slideBar.value);
				// 	if (mmsg.is_left() && mmsg.is_up()) { break; }
				// }
				// for (;mmsg.x < slideBar.value + slideBar.x;delay_ms(0))
				// {
				// 	slideBar.value--;
				// 	egeDrawSlideBar(&slideBar);
				// 	if (mousemsg())
				// 	{
				// 		mmsg = getmouse();
				// 	}//这种内部循环的一定注意更新数据！

				// 	setfillcolor(WHITE);
				// 	ege_fillrect(260, 280, 80, 40);
				// 	setfillcolor(TRANSPARENT);
				// 	settextjustify(CENTER_TEXT, CENTER_TEXT);
				// 	xyprintf(300, 300, "Value:%-4d", slideBar.value);
				// 	if (mmsg.is_left() && mmsg.is_up()) { break; }
				// }
				slideBar.value = mmsg.x - slideBar.x;
				// cleardevice();//不过用这个感觉会有点卡顿
				egeDrawRoundRec(slideBar.x, slideBar.y, slideBar.width, slideBar.height, slideBar.radius, LIGHTGRAY);
				egeDrawRoundRec(slideBar.x, slideBar.y, slideBar.value, slideBar.height, slideBar.radius, DARKGRAY);
				egeDrawSlideBar(&slideBar);
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
	closegraph();
	return 0;
}
//EOF 2023-11-11 19:45：！！！！！完美实现目标！！！超好看！！！
//EOF 2023-11-11 20:04：！！！再次（？）完美实现目标！现在可以显示值啦！！！
//wok搞出这个是真的兴奋哈哈哈！！！比搞出按钮更甚一些！！！
//还可以实现一下让鼠标点击的时候不那么突兀但是上传git后不让我重做了……算了先搞其它功能
//EOF 2023-11-11 20:43：不搞了不搞了，艹下一个
