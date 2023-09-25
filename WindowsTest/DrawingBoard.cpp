// 09-23第一个绘图软件
// 虽然不和设想但是可以使用了
#include <graphics.h>
// #include <t

int fps = 90, winWidth = 1920, winHeight = 1080;
void startUp()
{
	setinitmode(INIT_NOFORCEEXIT);
	setcaption("09-23 Woisol's First Drawing Apps!!!");
	initgraph(winWidth, winHeight, INIT_RENDERMANUAL);
	setbkcolor(BLACK);
	setcolor(BLACK);
	setlinewidth(100);
	xyprintf(0, 0, "Thought not what expected, but wait a sec to stop drawing.");
	//!!！发现啦！！！开头可以不停顿，结尾停顿就行，那关键还是在于结束那里

	setbkmode(TRANSPARENT);
}
void barWithBondery(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2)
{
	line(x1, y1, x2, y1);
	line(x2, y1, x2, y2);
	line(x2, y2, x1, y2);
	line(x1, y2, x1, y1);
}
void startAnimation()
{
	for (unsigned short int t = 0; t < 256 && is_run(); t += 2, delay_fps(fps)) // 对于这个delayfps有点混乱，甚至想t += XX/90，但其实它本质还是和Sleep()一样嘛
	{
		setbkcolor(RGB(t, t, t));
	}
	for (int t = 1; t < 150 && is_run(); t += 2, delay_fps(fps))
	{
		setcolor(RGB(255 - t, 255 - t, 255 - t));
		cleardevice();
		// barWithBondery(1770, 980, 1870, 1030); // ？？？？莫名其妙就自己成了圆角矩形啦？？？？？？？？
	}
	// setbkcolor(WHITE);//无用
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	xyprintf(1820, 1005, "CleanSreen");
	settextjustify(LEFT_TEXT, TOP_TEXT);
}

void mainloop(void)
{
	int mouseX = 0,
		mouseY = 0;
	mouse_msg mmsg;

	for (; is_run();)
	{
		// moveto(mouseX, mouseY);

		mmsg = getmouse();
		if (mmsg.is_left() && mmsg.is_down())
		{
			do
			{
				mousepos(&mouseX, &mouseY);
				putpixel(mouseX, mouseY, BLACK);
				delay_ms(1);
				// if (mmsg.is_move())
				// {
				// 	continue;
				// }//用了这个反而不能停下了
				// flushmouse();//！！！去掉这个以后就不会遗漏左键抬起啦！虽然还是要等一小段时间才能停
				mmsg = getmouse();
			} while (!(mmsg.is_left() && mmsg.is_up()) && is_run());
		}
		// else
		// {
		// 	continue; // 不要用break啊！直接闪掉啦！
		// }
	} // 这里的两个循环是不是逻辑有点混乱？后面再改改，先养老了吧
}
int main(void)
{
	startUp();
	startAnimation();
	mainloop();

	return 0;
}