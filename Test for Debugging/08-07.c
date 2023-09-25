#include<windows.h>
int main()
{
mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE,1348*65535/1920,774*65535/1080,0,0);
}
