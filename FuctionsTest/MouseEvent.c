#include<windows.h>
int main()
{
    system("pause");
    mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE,65535/2,65535/2,0,0);
    Sleep(10);
    mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
    mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
}