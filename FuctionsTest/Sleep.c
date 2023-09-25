#include<stdio.h>
#include<windows.h>
void a()
{
    Sleep(1000);//1000 DO IS 1SEC!!!
}
void b()
{
    int t=0;
    for(t=0;t<=10;t++)//FORGOTED THE ORDER OF "FOR"!!!!!!!!!
    {
        Sleep(1000);
        printf("t:%d\n",t);
    }
}
int main()
{
    // a();
    b();
    system("pause");
}