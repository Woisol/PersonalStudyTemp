//PT 2023-11-11 20:44
//About:ege输入框实现
#include<stdio.h>
#include<string.h>
#include"GraphicsWidget.h"
char oW;

int main(void)
{
	char tempString[2] = { 0 };
	key_msg kbKey;
	struct InputBox inputBox;

	egeInitInputBox(&inputBox, 100, 50, 400, 300, 10);
	egeWindowInition("InputBox", 600, 400, 1, 1000, 1000);
	for (;is_run();delay_fps(FPS))
	{
		if (kbmsg() && is_run())
		{
			tempString[0] = getch();
			//艹回头看了之前实现的那次才搞得，用keymsg不可行胡乱输入一大堆不知道为什么
			//不行这样无法实现退格……
			// kbKey = getkey();
			// if (kbKey.msg = key_msg_char)//新看的方法from
			// {
			// 	tempString[0] = kbKey.key;
			// }
			switch (oW = tempString[0])
			{
			case key_back:inputBox.content[strlen(inputBox.content) - 1] = '\0';break;
				//strncpy(inputBox.content, inputBox.content, strlen(inputBox.content) - 1);break;//sizeof(inputBox.content) / sizeof(char) - 1！！！看过的！！！sizeof和strlen！！！
			default:strcat(inputBox.content, tempString);//, 150 - sizeof(inputBox.content)
				//啊为什么唯独不运行这个函数？
				//注意不建议使用strcat，防止溢出最好还是用strncat
			}
		}
		egeDrawInputBox(&inputBox);
	}
	closegraph();
	return 0;
}
//EOF 2023-11-11 22:26：！！！！得啦！！！完美运行！！！
//新bug，删除最后一个字符再次删除的话会变成矩形……