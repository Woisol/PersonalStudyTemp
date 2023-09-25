#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    printf("Waiting for typing...");
    while(1)
    {
        int t;
        t=getch();
        system("cls");
        printf("%d",t);//WARNING When typing A it showed 97 but actually 65!!!Waiting for debugging...
    }
    system("pause");
}