#include<stdio.h>
#include<windows.h>
int main()
{
    system("echo off");
    printf("%d",system("tasklist /fi \"imagename eq msedge.exe\"\n"));//Unabled to find where it is running...
    system("pause");
}