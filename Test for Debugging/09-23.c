#include <stdio.h>
#include <graphics.h>

int main(void)
{

	// setinitmode(INIT_NOFORCEEXIT);
	// setinitmode(INIT_RENDERMANUAL);
	initgraph(480, 480, INIT_RENDERMANUAL);
	setcolor(BLACK);
	setbkcolor(WHITE); // ？？？这个原来是要在initgraph之后搞的呀！也不用cleardevice……
	// cleardevice();
	settextjustify(CENTER_TEXT, CENTER_TEXT);

	xyprintf(240, 240, "Test");
	for (int key = 0, word = 20; is_run(); word += 8)
	{
		// getch();
		if (key = getch() && key == 27) // 改代码注意从头读一遍！！！key == getch()/笑死哈哈哈
		{

			cleardevice();
			delay_fps(0);
		}
		else
		{
			xyprintf(word, 240, "%c", key);
			delay_fps(0);
		}
	}
	// kbmsg(); // kbmsg无法刷新
	// mousemsg();
	// delay_fps(60);//KP!!!

	// getch(); // 很明确，就是在这个getch之后窗口才能刷新……
	getch();
	return 0;
}