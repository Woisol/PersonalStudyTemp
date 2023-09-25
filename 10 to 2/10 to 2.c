// Personal Test1 08-26,关于十进制小数转化为二进制精度损失问题
#include <stdio.h>
double x;
double y;
// 注意全局变量是放在main函数外面的
double getDecimal(double originalNum)
{
	return originalNum - (int)originalNum;
}
void printFormula(void)
{
	printf("%f × 2 = %f\n", x, y);
}
int main(void)
{
	int res[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	printf("Input a number to start translate to Binary\n");
	scanf("%lf", &x);
	printf("\nStart Translating!\n");

	// 终于学会分段了你
	res[0] = (int)x;
	x = getDecimal(x);
	y = 2 * x;
	res[1] = (int)y;
	// 易混
	printFormula();

	for (int c = 0; c < 9 && getDecimal(y) != 0; c++)
	{
		x = getDecimal(y);
		y = 2 * x;
		res[c + 2] = (int)y;
		// woq！！！！！！！服了！！！果然实际推演一下就看出来了newbing都看不出来的问题
		// 这里原本是(int)getDecimal(y)的服了什么sb
		printFormula();
		if (c == 8 && getDecimal(y) != 0)
		{
			printf("存在精度误差!\n");
			break;
		}
		//!!!你知道开始为什么c < 9无法终止循环吗!!!数组超边界了,看来大概是被还原成0了………………
	}
	printf("\nThe Binary Num is %d.%d%d%d%d%d%d%d%d%d%d\n\n\n", res[0], res[1], res[2], res[3], res[4], res[5], res[6], res[7], res[8], res[9], res[10]);
	main();
	return 0;
}