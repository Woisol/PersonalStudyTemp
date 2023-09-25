#include<stdio.h>
#include<time.h>
#include<windows.h>
int main()
{
    time_t t=0;
    struct tm *ltime=NULL;
    while(1)
    {
        Sleep(500);
        t=time(NULL);
        ltime=localtime(&t);//localtime(&(time(NULL))) is wrong via the & ...
        system("cls");
        printf("%d-%d-%d %d %d:%d:%d",ltime->tm_year+1900,ltime->tm_mon+1,ltime->tm_mday,ltime->tm_wday,ltime->tm_hour,ltime->tm_min,ltime->tm_sec);
    }
}