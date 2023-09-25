// 原文件于09-14下午于图书馆完成，现（晚上）已丢失，以下为根据记忆复写而成，基本一致但可能缺少注释
// 需要增加对10位数以上的支持
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getNumOfNum(int originalNum, int position)
{
	return originalNum / (int)pow(10, position - 1) % 10;
}
int main(void)
{
	int originalNum = 0, scale = 0, integerNum = 0, decimalNum = 0;
	printf("Input original number and its Scale:");
	scanf("%d(%d)", &originalNum, &scale);

	int tempNum = originalNum;
	do
	{
		tempNum /= 10;
		integerNum++;
	} while (tempNum != 0);

	for (int t = 1; t < integerNum + 1; t++)
	{
		decimalNum += getNumOfNum(originalNum, t) * pow(scale, t - 1);
	}

	printf("The decimal Num = %d\n\n", decimalNum);
	main();
	return 0;
}