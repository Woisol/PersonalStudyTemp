#include<stdio.h>
#include<windows.h>
int main()
{
    while(1)
    {
        Sleep(100);
        system("cls");
        printf("%d",GetKeyState(65));
    }
}