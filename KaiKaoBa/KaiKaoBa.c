//**PT 2023-12-30 09:00-
//**About:None
//**EOF 2023-12-30 09:53：暂时先到这里，提交git了，还要复习没时间了，太急了思路都没理清……寒假再搞了。
#include<stdio.h>
#include<time.h>
#include<GraphicsWidget.h>
const char[] timeFormat = "%2d:%2d";
int hour = 0, min = 0, sec = 0;
bool isRuning = 1, isCustom = 0;
InputBox timeShowcase;
Button button_StartorPause;
Button button_Set;
Button button_Reset;
time_t timer = 0;
struct tm* curTime = localtime(&timer);
void timeRefresh(void)
{
	timer = time(NULL);
	hour = curTime->tm_hour;
	min = curTime->tm_min;
	sec = curTime->tm_sec;
}
void button_StartorPause_Effect(void)
{
	if (isRuning)
		isRuning = 0;
	else isRuning = 1;
}
void button_Reset_Effect(void)
{

}
void mainLoop()
{
	mouse_msg mmsg;
	char[6] tmpContent = { 0 };
	for (;is_run();delay_ms(100))
	{
		mmsg = getmouse();
		if (!isCustom)
			timeRefresh();
		else()//！是的！不应该是用自己延迟计时……应该是用timer！
			sprintf(tmpContent, timeFormat, hour, min, sec);
		if (egeIsInsideRec(20, 20, 260, 150, 5, mmsg.x, mmsg.y) && mmsg.is_left() && mmsg.is_down())
		{
			timeShowcase.content = ""
		}
	}
}
int main(void)
{
	// InputBox inputbox_startTime;
	// InputBox inputbox_endTime;
	// InputBox inputbox_lastTime;

	egeWindowInition("KaiKaoBa", 300, 600, 1000, 1000, 0);
	egeInitInputBox(&timeShowcase, 20, 20, 260, 150, 5);//td考不考虑加一个可变长可以一直赋值多个按钮？
	egeInitButton(&button_StartorPause, 20, 20, 260, 100, 5);
	egeInitButton(&button_Set, 20, 140, 260, 100, 5);
	egeInitButton(&button_Reset, 20, 260, 260, 100, 5);
	// egeInitInputBox(&inputbox_startTime, 20, 380, 70, 50, 5);
	// egeInitInputBox(&inputbox_endTime, 110, 380, 70, 50, 5);
	// egeInitInputBox(&inputbox_startTime, 200, 380, 70, 50, 5);

	egeDrawInputBox(&timeShowcase);
	egeDrawButton(&button_StartorPause);
	egeDrawButton(&button_Set);
	egeDrawButton(&button_Reset);
	// egeDrawInputBox(&inputbox_startTime);
	// egeDrawInputBox(&inputbox_endTime);
	// egeDrawInputBox(&inputbox_lastTime);



}