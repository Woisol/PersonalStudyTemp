#include <stdio.h>
int originalNum = 0, scale = 0;
void getIntegerNum(int originalNum, int integerNum, int scale)
{
	do
	{
		originalNum /= scale;
		integerNum++;
	} while (originalNum != 0);
}
int main(void)
{
	int integerNum = 0; // tempNum = 0;
	// 注意像这种只使用一次又不能改变原数的应该使用函数呀！
	printf("Input Scale:");
	scanf("%d", &scale);
	if (scale < 2)
	{
		printf("Error!Pls retype!\n\n");
		main();
	}
	printf("Input Original Number:");
	scanf("%d", &originalNum);

	getIntegerNum(originalNum, integerNum, scale);
	// woq修改这里的时候无意中触碰到了一个指针的问题：
	// 注意*ptr不能直接等于一个变量来使用！scanf会报错segmentation fault
	// 毕竟*ptr本质是地址，如果没指定一个地址会乱指！
	// 也不要*ptr = 0；……
	/*注意有三种相似的方式：
		一是定义全局变量
		二是定义指针，再在函数中使用
		三是定义普通变量，在函数中用&
		emm所以该用的全局变量还是得用*/

	int shang = 0, yu = 0;
	char resultNum[integerNum + 1];
	resultNum[integerNum] = '\0';
	// yf：注意如果是单独给每个char数组成员赋值不要忘了末尾的\0!!!
	for (int count = 0; count < integerNum; count++)
	{
		resultNum[integerNum - count - 1] = originalNum % scale + 48;
		// 记得数字与数字字符的转化!!!
		originalNum /= scale;
	}

	printf("Result = %s(%d)\n\n", resultNum, scale);
	main();
	return 0;
}
// resultNum[integerNum - count] = (char)(originalNum % scale);
// switch (originalNum % scale)
// {
// case 0:
// 	resultNum[integerNum - count - 1] = '0';
// 	break;
// case 1:
// 	resultNum[integerNum - count - 1] = '1';
// 	break;
// case 2:
// 	resultNum[integerNum - count - 1] = '2';
// 	break;
// default:
// 	printf("Error!");
// 	return 1;
// }
// if (originalNum == 0)
// {
// 	resultNum[integerNum - count - 1] = originalNum + 48;
// }
// 其实不用这段也不要紧的,毕竟再/一次得到原数的
