#define nscanf(format,variable) sscanf(inputBox.content, format, variable);
#define nprintf(format,variable) sprintf(msgBox.content, format, variable);//注意宏定义函数与普通函数不一样只是直接替换所以不用也不要写类型名！
#include<stdio.h>
#include"GraphicsWidget.h"

struct InputBox inputBox;
struct MsgBox msgBox;
struct SlideBar slideBar;
struct Button confirmButton, clearButton, rebotButton;
void layoutTest(void);
// void inputBox();
void confirmButtonEffect();
void clearButtonEffect();
void rebotButtonEffect(void(*)());
void egeNoBlackWindows(void(*)());//!似乎声明时无法声明传递函数的…………………………………………而且听说其它语言是不会把声明专门放在头文件的……不这样搞了……
