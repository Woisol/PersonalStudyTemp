// 08-24

// //Test1
// #include <stdio.h>
// #include <windows.h>
// int main(void)
// {
// 	int a, b, c, resultCount = 0;
// 	for (a = 1; a < 10; a++)
// 	{
// 		for (b = 0; b < 10; b++)
// 		{
// 			for (c = 0; c < 10; c++)
// 			{
// 				if (a != b && a != c && b != c)
// 				{
// 					resultCount++;
// 					printf("%d%d%d\n", a, b, c);
// 				}
// 			}
// 		}
// 	}
// 	printf("There're %d result match!", &resultCount);
// 	system("pause");
// 	return 0;
// }
// /* Conclude
// 记得for里面的分隔是；不是，！！！
// printf后面的变量不需要用取址&…………
// */

// // Test2
// #include <stdio.h>
// #include <windows.h>
// int main(void)
// {
// 	printf("Input Your ")
// }

// 08-25

// // CPPr-2.12.3
// #include <stdio.h>
// #include <windows.h>
// int main(void)
// {
// 	int years = 0;
// 	printf("How old are you?");
// 	scanf("%d", &years);
// 	// 为什么这里不用\n也可以换行呢?
// 	printf("You have live for %d days!\n\n\n", years * 12 * (30 * 4 + 31 * 7 + 28));
// 	main();
// 	return 0;
// }

// // CPPr-2.12.6
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
// 	int toes = 10;
// 	printf("tose: %d\ntose's double:%.5f\ntose's cube:%.5f", toes, pow(toes, 2), pow(toes, 3) * toes);
// 	//注意sqrt()是开方不是平方…………幂是pow!!!
// 	//注意double数必须要用%.nf否则数据出错!!!没错也是用的%.nf
// 	getchar();
// 	return 0;
// }

// // CPPr-3.1
// #include <stdio.h>
// int main(void)
// {
// 	int t = 0;
// 	scanf("%d", &t);
// 	printf("%d\n", t);
// 	printf("%c\n%s\n", t, t, t);
// 	return 0;
// }
// // printf与scanf使用不同的格式输入输出会出现莫名其妙的问题………………

// 08-26

// // Personal Test1 08-26,关于十进制小数转化为二进制精度损失问题
// #include <stdio.h>
// double x;
// double y;
// // 注意全局变量是放在main函数外面的
// double getDecimal(double originalNum)
// {
// 	return originalNum - (int)originalNum;
// }
// void printFormula(void)
// {
// 	printf("%f × 2 = %f\n", x, y);
// }
// int main(void)
// {
// 	int res[11];
// 	printf("Input a number to start translate to Binary\n");
// 	scanf("%lf", &x);
// 	printf("\nStart Translating!\n");

// 	// 终于学会分段了你
// 	res[0] = (int)x;
// 	x = getDecimal(x);
// 	y = 2 * x;
// 	res[1] = (int)getDecimal(y);
// 	// 易混
// 	printFormula();

// 	for (int c = 0; c < 9; c++)
// 	{
// 		x = getDecimal(y);
// 		y = 2 * x;
// 		res[c + 2] = (int)y;
// 		// woq！！！！！！！服了！！！果然实际推演一下就看出来了newbing都看不出来的问题
// 		// 这里原本是(int)getDecimal(y)的服了什么sb
// 		printFormula();
// 		//!!!你知道开始为什么c < 9无法终止循环吗!!!数组超边界了,看来大概是被还原成0了………………
// 	}
// 	printf("\nThe Binary Num is %d.%d%d%d%d%d%d%d%d%d%d\n\n\n", res[0], res[1], res[2], res[3], res[4], res[5], res[6], res[7], res[8], res[9], res[10]);
// 	main();
// 	return 0;
// }

// // 08-27

// // Personal Test2 关于getchar的问题
// #include <stdio.h>
// int main(void)
// {
// 	char t;
// 	scanf("%c", &t);
// 	printf("%c", t);
// 	while (1)
// 	{
// 		while ((getchar() != '\n') && t != EOF)
// 			;
// 		printf("%c", getchar());
// 	}
// 	return 0;
// }

// 08-29

// PT3 关于char[]末尾不包括'/0'的问题
// 好奇怪,yf那边末尾不加\0是会出问题的...他那边是变成(
// #include <stdio.h>
// int main(void)
// {
// 	char charFilledByCircle[3];
// 	for (int t = 0; t < 2; t++)
// 	{
// 		charFilledByCircle[t] = 'a';
// 	}
// 	char charWithoutEnding[3] = {'a', 'b'};
// 	char charWithEnding[3] = {'a', 'b', '\0'};
// 	printf("%s\n%s\n%s", charFilledByCircle, charWithoutEnding, charWithEnding);
// 	getchar();
// 	return 0;
// }

// // 08-31/09-01

// // PT4 各种进制转化
// #include <stdio.h>
// int main(void)
// {
// 	int originalNum = 0, scale = 0, integerNum = 0, tempNum = 0;
// 	printf("Input Scale:");
// 	scanf("%d", &scale);
// 	printf("Input Original Number:");
// 	scanf("%d", &originalNum);

// 	tempNum = originalNum;
// 	do
// 	{
// 		tempNum /= scale;
// 		integerNum++;
// 	} while (tempNum != 0);

// 	int shang = 0, yu = 0;
// 	char resultNum[integerNum + 1];
// 	resultNum[integerNum] = '\0';
// 	// yf：注意如果是单独给每个char数组成员赋值不要忘了末尾的\0!!!
// 	for (int count = 0; count < integerNum; count++)
// 	{
// 		resultNum[integerNum - count - 1] = originalNum % scale + 48;
// 		// 记得数字与数字字符的转化!!!
// 		originalNum /= scale;
// 		// resultNum[integerNum - count] = (char)(originalNum % scale);
// 		// switch (originalNum % scale)
// 		// {
// 		// case 0:
// 		// 	resultNum[integerNum - count - 1] = '0';
// 		// 	break;
// 		// case 1:
// 		// 	resultNum[integerNum - count - 1] = '1';
// 		// 	break;
// 		// case 2:
// 		// 	resultNum[integerNum - count - 1] = '2';
// 		// 	break;
// 		// default:
// 		// 	printf("Error!");
// 		// 	return 1;
// 		// }
// 		// if (originalNum == 0)
// 		// {
// 		// 	resultNum[integerNum - count - 1] = originalNum + 48;
// 		// }
// 		// 其实不用这段也不要紧的,毕竟再/一次得到原数的
// 		//
// 	}

// 	printf("Result = %s", resultNum);
// 	return 0;
// }

// // PT5 判断整数位数
// // 原创
// #include <stdio.h>
// int main(void)
// {
// 	int targetNum = 0, integerNum = 0;
// 	printf("Input a Number:\n");
// 	scanf("%d", &targetNum);
// 	do
// 	{
// 		targetNum /= 10;
// 		//开始想着要搞nextNum但其实完全没必要还要多赋值
// 		integerNum++;
// 	} while (targetNum != 0);
// 	// 注意do while中while后面要有；！！！
// 	printf("There are %d Num in this number\n", integerNum);
// }

// // 09-01
// // PT 一些函数测试
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	// printf("%s", getenv("PATh"));
// 	// system("pause");
// 	int a = 1;
// 	printf("%d%d", a);
// 	return 0;
// }

// 09-14
// az隔了这么久
#include <stdio.h>
#include <unistd.h>
// 这个unistd查了查，其实是给UNIX用的/笑，类似于windows.h，以后还是用windows.h比较好吧
int main(void)
{
	sleep(3);
	usleep()
		// az这个sleep用的是秒的单位而且还不能小数
		// 要用要用usleep（）才是微秒
		system("pause");
}