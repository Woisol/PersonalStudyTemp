#include<stdio.h>
#include<windows.h>
int main()
{
    int a=0,b;
    while(1)
    {
        Sleep(100);//ESSENTAIL STEP!!!Or CPU usage could be 14%,now 0.2%though.
        // if(GetKeyState(65)<0)//No need to "a=getkeystate<0".
        // {
        //     if(GetKeyState(18)<0)
        //     {
        //         system("cls");
        //         printf("ACTING %d",a);
        //         a++;
        //     }
        // }
        // if(GetKeyState(65)<0){if(GetKeyState(18)<0){}}
        if(GetKeyState(65)<0 && GetKeyState(18)<0){printf("Acting\n");}//本来就有短路求值没必要两个if的………………
    }
}