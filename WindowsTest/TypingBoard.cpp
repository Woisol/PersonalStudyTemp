// 09-18 21：30+-第一次搞的图形化窗口！也只能做到这了哈哈调位置挺难的。
// 屎山！逻辑已经巨乱也不想改了…………
#include <stdio.h>
// #include <windows.h>  //这个如果包含路径没有bin以外的就找不到
#include <graphics.h> //woc！！！！！配置完要重启vsc！！！！
// woq这个库定义的开头讲了！！！是要用delay_ms刷新的！！艹下次写注意吧
// 有时注意看一下库的开头…………
//  #include <conio.h>
//  #include <sys_edit.h> //这个必须放在graphics之后

unsigned short int fps = 90;
short winWidth = 600, winheight = 400;
// 人家short都可以不用再加int了的……
// #############################################################
void startUp()
{
	setinitmode(INIT_NOFORCEEXIT); // 其实不用noforce的……你本身也不希望关了之后它还没退出
	// setinitmode(INIT_RENDERMANUAL);
	setcaption("09-19 Woisol's First Grapics Window!!!");
	initgraph(winWidth, winheight, INIT_RENDERMANUAL); // 这个0是用来加入ege自己的开场动画的，为1时在debug时无在release时有
	setbkcolor(BLACK);								   // 注意这个是在initgraph之后搞的！

	setcolor(BLACK);
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
	// 欸欸for可以这样多个指令的对吧
	// 注意如果写多个表达式一定注意用好逻辑连接符，如果写","似乎是或的意思
	{
		setbkcolor(RGB(t, t, t));
	}
	for (int t = 1; t < 150 && is_run(); t += 2, delay_fps(fps))
	{
		setcolor(RGB(255 - t, 255 - t, 255 - t));
		// setfillcolor(RGB(t, t, t));
		// bar(250, 300, 350, 350);//似乎不包括边框…………
		cleardevice();
		barWithBondery(480, 350, 580, 380);
	}
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	xyprintf(530, 365, "CleanSreen");
	settextjustify(LEFT_TEXT, TOP_TEXT);
	// outtextxy(530, 365, "CLearScreen");
	// 这两个以后可能绑定在一起比较好
	//???刚刚好像什么都没改一编译它居然就显示了文字啦？
}
// ############################################################
void mainloop_TypingMouseTest(void) // Retype Edition
{
	int wordInputed;
	int w = 0, l = 0, mPosX = 0, mPosY = 0;
	flushmouse();
	for (; is_run();) // w += 8！！！sb！！！这次不是阻塞啦！要输入了一个才能+啊！
	{
		if (w > winWidth)
		{
		NextLine:
			l += 12;
			w = 0;
		}
		// mouse_msg mmsg = getmouse();
		while (mousemsg())
		{
			mouse_msg mmsg = getmouse();
			// if (mmsg.is_move())
			// {
			// 	break;
			// }
			// 没有必要，在后面一起判断就行
			// mousepos(&mPosX, &mPosY);

			// 优化一下鼠标点击的逻辑
			if (!mmsg.is_move() && mmsg.is_left())
			{
				if (mmsg.is_down())
				{
					mousepos(&mPosX, &mPosY);
					if (480 < mPosX && mPosX < 580 && 350 < mPosY && mPosY < 380)
					{
						cleardevice();
						barWithBondery(480, 350, 580, 380);
						settextjustify(CENTER_TEXT, CENTER_TEXT);
						xyprintf(530, 365, "CleanSreen");
						settextjustify(LEFT_TEXT, TOP_TEXT);
						delay_ms(0);

						w = l = 0;
					}
				}
			}
			// if (mmsg.is_left() && mmsg.is_down() && 480 < mPosX && mPosX < 580 && 350 < mPosY && mPosY < 380)
			// {
			// 	cleardevice();
			// 	barWithBondery(480, 350, 580, 380);
			// 	settextjustify(CENTER_TEXT, CENTER_TEXT);
			// 	xyprintf(530, 365, "CleanSreen");
			// 	settextjustify(LEFT_TEXT, TOP_TEXT);
			// 	// delay(1);

			// 	w = l = 0;
			// }
		}
		// flushmouse();
		if (kbmsg()) // 这个地方理应用while，毕竟要一次处理完所有信息
		{
			wordInputed = getch();		  // getch/getkey?
			if (wordInputed == key_enter) // 09-21新增：换行功能！
			{
				goto NextLine;
			}
			xyprintf(w, l, "%c", wordInputed);
			w += 8;
			// flushkey();
			delay_ms(0);
		}
		// 现在重写一次以后症状好多了，可以明显发现鼠标动了以后才显示刚刚打的字符……至少不是没反应啦
		// 所以现在很明显是在于鼠标那里阻塞啦
		// ???为什么现在又变成只有输入的时候才能判断了
	}
}
void mainloop_TypingTest_Old(void)
{
	// mdsb不要再在每次循环都初始化啦！
	for (int t = 0, l = 0, k; is_run() && k != key_esc; t += 8) // 用这个in_run就可以按关闭键关闭了emm好像有时并不行
	// 建议每个字符之间差7/8
	//!!!懂啦如果程序阻塞就会导致即使有in_run()也无法退出！
	{
		// char str[32];
		int mPosX, mPosY; // az这两个只能是int因为函数规定了…………
		mouse_msg msg;

		// 使用getch会等待，要同时进行其它动作的话用kbhit()
		if (t > winWidth) // 这个t不是个数而是位置，不要除以7！顽瘴痼疾！
		{
			l += 12;
			t = 0;
		}
		// 这个要在前面！！不然怪不得后面输的都是凸出来一点，就是因为循环开始时又+8了！
		// getch();
		if (kbhit()) // az加补丁&& msg.is_move() != true都搞不了嘛：（
		// 原用kbhit，似乎把鼠标的信息也加进来了……欸欸现在好像又行啦？az原来是getch修好的……
		// 艹这个kbmsg也不行，会阻塞
		{
			k = getch();
			//  cleardevice();//会连字一起删掉…………
			// woq后面加入clear的功能后这里忘记改了…………
			//??加入后现在移动鼠标也会输入啦？？？发现了是重复输入了k的值
			// k = kbmsg();
			// flushkey();即使是在后面加都不能输入了………………
			barWithBondery(0, 0, t + 8, l + 15);
			// sprintf(str, "%c", k);
			// cleardevice();
			settextjustify(LEFT_TEXT, TOP_TEXT); // 调整文字坐标指的位置
			xyprintf(t, l, "%c", k);
			// outtextxy(t, l, str);				 // az有时vsc会错误报错，运行试试再说！
			// 注意这里是string，不能用char啊！q
		}

		// Refrash
		if (mousemsg())
		{
			mousepos(&mPosX, &mPosY);
			msg = getmouse(); // sb这个要放在isleft之前啊！不然你判定个锤……
		}
		// 但是这样一搞他又出现鼠标移动输入的毛病了

		// for(mousepos(&mPosX,&mPosY);mousemsg() && msg.is_left() && 480 < mPosX < 580 && 350 < mPosY < 380)
		// 你循环个锤……
		if (msg.is_left() && 480 < mPosX && mPosX < 580 && 350 < mPosY && mPosY < 380) // mousemsg() &&
		// 可以这样写范围的嘛
		{
			cleardevice();
			barWithBondery(480, 350, 580, 380);
			settextjustify(CENTER_TEXT, CENTER_TEXT);
			outtextxy(530, 365, "CLearScreen");

			t = 0;
			l = 0;
			// 把这两个去掉可以很好看；）艹
		}
	}
}
void mainloop_MouseTest(void)
{
	unsigned short textX = 0, textY = 0;
	mouse_msg msg;
	for (int mPos_x, mPos_y; is_run(); delay_fps(fps))
	// 这里如果条件有mouse_msg那鼠标不动就停了………………
	//  教程中的mousehit不再使用
	{
		char mPos[32];
		mousepos(&mPos_x, &mPos_y);
		// 若移出窗口不会更新，除非按着鼠标键后移出
		sprintf(mPos, "%4d,%4d", mPos_x, mPos_y);
		settextjustify(CENTER_TEXT, CENTER_TEXT);
		outtextxy(winWidth / 2, winheight / 2, mPos);
		// 无意中用了outtext，这个居然是char？等下试试

		msg = getmouse();
		if (msg.is_left())
		{
			settextjustify(LEFT_TEXT, TOP_TEXT);
			xyprintf(textX, textY, "%4d,%4d", mPos_x, mPos_y);
			textX += 100;
			if (textX > winWidth - 100)
			{
				textY += 18;
				textX = 0;
			}
		}
	}
}
void typingFuncTest(void)
{
	for (int t = 0; t < 100; t++)
	{
		rectprintf(0, 0, winWidth / 2, winheight / 2, "rectprintf!");
	}
}
// void inputtingFuncTest(void)
// {
// 	sys_edit editBox;
// 	editBox.move(winWidth / 2, winheight / 2);
// 	editBox.setfont(12, 0, "");
// 	editBox.size(30, 16);
// }
// void editBoxTest(void)
// {
// 	char inputWord[30];

// 	sys_edit editBox;
// 	editBox.move(winWidth / 2, winheight / 2);
// 	editBox.setfont(12, 0, "Type into Something!");
// 	editBox.size(30, 20);
// 	// editBox.setmaxlen(30);
// 	editBox.setbgcolor(RGB(200, 200, 200));
// 	// editBox.setcolor(BLACK);
// 	// editBox.setreadonly(false);
// 	editBox.create(false);
// 	editBox.visible(true);
// 	editBox.setfocus();

// 	editBox.gettext(30, inputWord);
// 	xyprintf(winWidth / 2, winheight / 2 + 30, "You inputed %s", inputWord);
// 	getch();
// }
int main(void)
{
	startUp();
	startAnimation();

	// mainloop_TypingTest();
	//?????为什么用了这个函数开屏22动画最后的文字就出不来？？？？？
	// mainloop_MouseTest();
	mainloop_TypingMouseTest();
	// typingFuncTest();
	// editBoxTest();

	// getch();
	// getch();
	// 有循环以后不需要再搞这个了……
	getch();
	closegraph(); // 注意这个！
	return 0;
}

/*经验总结：
加库不经仅仅是加库文件那么简单，注意还要加头文件并链接库
像这种链接库的，头文件和库文件一定要放在指定的位置！
includepath包含也没用必须是库链接的位置！
下次如果vsc能找到补全文件但是编译器找不到的话就是这个问题！
*/