//PT 2023-11-13 20:00
//About:演示：阶乘
#include"NoBlackWindows.h"
void newMain(void)
{
	int n = 0;
	nscanf("%d", &n);
	for (int t = n - 1;t > 1;t--)
	{
		n *= t;
	}
	nprintf("Factorial:%d", n);//艹不能有2个以上参数………………//不能输入中文
}
int main(void) { egeNoBlackWindows(newMain);return 0; }
