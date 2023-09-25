#include<windows.h>
int main ()
{
while(1)
{
    Sleep(100);
    if(GetKeyState(83)<0){if(GetKeyState(18)<0){break;}}//Miss "}" that fail.Which wont be found.
    if(GetKeyState(65)<0){if(GetKeyState(18)<0){system("\"G:\\Call of Duty Black Ops III\\BO3OfflineSwitcherUpdate9.EXE\"");break;}}
}
}