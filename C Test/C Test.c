//TN标记至10-08
// az你之前放下C这么久这里已经这么无知了嘛…………
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
// #include <stdio.h>
// #include <unistd.h>
// // 这个unistd查了查，其实是给UNIX用的/笑，类似于windows.h，以后还是用windows.h比较好吧
// int main(void)
// {
// 	sleep(3);
// 	usleep()
// 		// az这个sleep用的是秒的单位而且还不能小数
// 		// 要用要用usleep（）才是微秒
// 		system("pause");
// }

//10-08 Class Test
// #include <stdio.h>
// #include <math.h>
// #define PI 3.14
// int main(void)
// {
// 	double lenght = 0, r = 0;
// 	scanf("%lf", &lenght);
// 	scanf("%lf", &r);
// 	printf("the surface area of the cube is %.2f\nthe surface area of the sphere is %.5f", pow(lenght, 2) * 6, 4 * PI * pow(r, 2));
// 	return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	int price1 = 0, num1 = 0, price2 = 0, num2 = 0;
// 	scanf("%d %d", &price1, &num1);
// 	scanf("%d %d", &price2, &num2);
// 	printf("%d", price1 * num1 + price2 * num2);
// }

// #include<stdio.h>
// #include<math.h>
// int main(void)
// {
// 	int a[9];double result = 0;
// 	int* ptr = a;
// 	scanf("%d %d %d", ptr, ptr + 1, ptr + 2);
// 	scanf("%d %d %d", ptr + 3, ptr + 4, ptr + 5);
// 	scanf("%d %d %d", ptr + 6, ptr + 7, ptr + 8);
// 	result = pow(*ptr, 2) + pow(*(ptr + 1), 2) + pow(*(ptr + 2), 2) + pow(*(ptr + 3), 2) + pow(*(ptr + 4), 2) + pow(*(ptr + 5), 2) + pow(*(ptr + 6), 2) + pow(*(ptr + 7), 2) + pow(*(ptr + 8), 2);
// 	printf("%d", (int)result);
// 	//输出零果然还是输出格式的问题…………
// 	return 0;
// }

//##################################################################################
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// #include<stdbool.h>

// // int main(void)
// // {
// // 	int originalNum = 0, specificNum[5];
// // 	scanf("%d", &originalNum);
// // 	for (int t = 0; t < 5; t++)
// // 	{
// // 		specificNum[t] = (int)(originalNum / pow(10, t)) % 10;
// // 	}
// // 	for (int t = 0; t < 5;t++)
// // 	{
// // 		printf("%d", specificNum[t]);
// // 	}
// // 	return 0;
// // }
// int main(void)
// {
// 	int specialNum[5];
// 	bool isBegin = 1;
// 	for (int t = 0;t < 5;t++)
// 	{
// 		specialNum[t] = getchar();//注意是getc(stdin)！！！注意数字0和字符0是不同的相差48！getc是获取字符！其实用getchar更好吧
// 	}
// 	for (int t = 0; t < 5; t++)
// 	{
// 		if (specialNum[4 - t] == '0' && isBegin == 1) { continue; }
// 		else { isBegin = 0; }
// 		printf("%c", specialNum[4 - t]);
// 	}
// 	return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// 	double price[4], sum = 0;
// 	short num[4];
// 	for (int t = 0; t < 4;t++)
// 	{
// 		scanf("%lf %d", &price[t], &num[t]);
// 		sum += price[t] * num[t];
// 	}
// 	printf("%.2f", sum);
// }

// #include<stdio.h>
// #include<math.h>
// #define sqrt_2 1.414//似乎不能用（）哈哈
// #define sqrt_3 1.732
// int main(void)
// {
// 	double a = 0;
// 	scanf("%lf", &a);
// 	printf("the surface area of the regular tetrahedron is %.3f\n\
// the volume of the regular tetrahedron is %.3f", sqrt_3 * pow(a, 2), sqrt_2 * pow(a, 3) / 12);
// 	return 0;
// }
//##################################################################################
// #include<stdio.h>
// int main(void)
// {
// 	float a = 0.0, b = 0.0, c = 0.0;
// 	double d = 0.0, e = 0.0, f = 0.0;
// 	scanf("%f %f %f", &a, &b, &c);
// 	scanf("%lf %lf %lf", &d, &e, &f);
// 	printf("%.3f\n%.3f", (a + b + c) / 3, (d + e + f) / 3);
// 	return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	int originalNum = 0;
// 	scanf("%d", &originalNum);
// 	printf("%d", originalNum / 100);
// }

// #include<stdio.h>
// int main() {
// 	double a, b;
// 	a = 1.0;
// 	b = -3.123;
// 	printf("%.3f %4.3f", a, b);
// 	return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// 	double sell[3][3];
// 	scanf("%lf %lf %lf", &sell[0][0], &sell[0][1], &sell[0][2]);
// 	scanf("%lf %lf %lf", &sell[1][0], &sell[1][1], &sell[1][2]);
// 	scanf("%lf %lf %lf", &sell[2][0], &sell[2][1], &sell[2][2]);
// 	printf("%.4f %.4f %.4f", (sell[0][0] + sell[0][1] + sell[0][2]) / 3, (sell[1][0] + sell[1][1] + sell[1][2]) / 3, (sell[2][0] + sell[2][1] + sell[2][2]) / 3);
// 	return 0;

// }

// #include<stdio.h>
// int main(void)
// {
// 	int data = 0;
// 	scanf("%d", &data);
// 	printf("%X\n%o", data, data);
// 	return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// 	int score[3][3];
// 	// double* ptrScore = &score[0][0];
// 	int totalScore[3];
// 	double averageScore[4];
// 	scanf("%d %d %d", &score[0][0], &score[0][1], &score[0][2]);
// 	scanf("%d %d %d", &score[1][0], &score[1][1], &score[1][2]);
// 	scanf("%d %d %d", &score[2][0], &score[2][1], &score[2][2]);
// 	totalScore[0] = score[0][0] + score[0][1] + score[0][2];
// 	totalScore[1] = score[1][0] + score[1][1] + score[1][2];
// 	totalScore[2] = score[2][0] + score[2][1] + score[2][2];
// 	averageScore[3] = (double)(totalScore[0] + totalScore[1] + totalScore[2]) / 3;
// 	averageScore[0] = (double)((score[0][0] + score[1][0] + score[2][0])) / 3;
// 	averageScore[1] = (double)((score[0][1] + score[1][1] + score[2][1])) / 3;
// 	averageScore[2] = (double)((score[0][2] + score[1][2] + score[2][2])) / 3;
// 	printf("%.2f %.2f %.2f\n", (double)(totalScore[0]), (double)(totalScore[1]), (double)(totalScore[2]));
// 	printf("%.2f %.2f %.2f %.2f", averageScore[3], averageScore[0], averageScore[1], averageScore[2]);
// 	return 0;
// }

// #include<stdio.h>
// #define PI 3.14
// #include<math.h>
// int main(void)
// {
// 	double r = 0.0, S = 0.0, V = 0.0;
// 	scanf("%lf", &V);
// 	r = pow(V * 3 / 4 / PI, 1.0 / 3);
// 	printf("%.2f\n", 4 * PI * pow(r, 2));
// 	return 0;
// }

//##################################################################################
//10-20

// #include<stdio.h>
// int main(void)
// {
// 	int a = 11;
// 	printf("%d", a++ * 1 / 3);
// 	return 0;
// // woq
// }

// #include<stdio.h>
// #define POINT3() printf("3");
// #define POINT6() printf("6");
// #define POINT12() printf("12");

// int main(void)
// {
// 	int maxSpeed = 0, minSpeed = 0, currentSpeed = 0;
// 	scanf("%d %d %d", &maxSpeed, &minSpeed, &currentSpeed);
// 	if (maxSpeed <= minSpeed) { printf("-1"); }
// 	else if (currentSpeed < minSpeed) { POINT3(); }
// 	else if (maxSpeed < currentSpeed && currentSpeed <= maxSpeed * 1.2) { POINT3(); }
// 	else if (maxSpeed * 1.2 < currentSpeed && currentSpeed <= maxSpeed * 1.5) { POINT6(); }
// 	else if (maxSpeed * 1.5 < currentSpeed) { POINT12(); }
// 	else { printf("0"); }
// }
//md再次重复不要直接a < b < c！！！这样是会短路求值的！！！

// #include<stdio.h>
// int main(void)
// {
// 	int originalNum = 0;
// 	scanf("%d", &originalNum);
// 	if (originalNum % 2 == 0) { printf("even"); }
// 	else { printf("odd"); }
// }

// #include<stdio.h>
// int main(void)
// {
//本部分已经总结在notion了
// 	// int a = 2, b = 2, c = 2;
// 	// a %= b %= c;
// 	// printf("%d\n", a);
// 	// return 0;

// 	// int a = 1;
// 	// a *= 0.1;

// 	// int a = 3;
// 	// printf("%d", (a += a -= a * a));

// 	// int a = 5;
// 	// printf("%d\n", !~a);

// 	int l = 1, r = 6;
// 	printf("%d\n", l + r >> 1);
// 	return 0;
// }

//【？】
// #include <stdio.h>
// void allOddBits(void)
// {
// 	int a = 0;
// 	scanf("%d", &a);
// 	// if (a == -1431655766) { printf("1"); }
// 	// else { printf("0"); }
// 	if (a & 2863311530 == 2863311530) { printf("1"); }
// 	// if (a | (~2863311530) == ~0) { printf("1"); }
//注意审题啊你！！！第一个数字是第0位！！………………
// 	else { printf("0"); }
// }
// int main(void)
// {
// 	allOddBits();
// 	//面向结果类编程/笑
// 	return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// 	int a = 0;
// 	scanf("%d", &a);
// 	a >>= 10;
// 	// a %= 2;//这样的话似乎对负数支持不好//以后编程注意对负数的支持！
// 	a &= 1;
// 	printf("%d", a);
// 	return 0;
// }

// ##########用异或实现无第三方交换数！
// #include <stdio.h>
// int main(void)
// {
// 	int a = 0, b = 0;
// 	scanf("%d %d", &a, &b);
// 	a ^= b;
// 	b = a ^ b;
// 	a ^= b;
// 	printf("%d %d", a, b);
// 	return 0;
// }

#include<stdio.h>

#define POINT0() printf("0 ");
#define POINT3() printf("3 ");
#define POINT6() printf("6 ");
#define POINT12() printf("12 ");

int main(void)
{
	int maxSpeed = 0, minSpeed = 0, currentSpeed = 0;
	scanf("%d %d %d", &maxSpeed, &minSpeed, &currentSpeed);
	if (maxSpeed <= minSpeed) { printf("-1 -1"); }
	else if (currentSpeed < minSpeed) { POINT3();printf("10"); }
	else if (currentSpeed > maxSpeed && currentSpeed <= maxSpeed * 1.2) { POINT3(); printf("%d", (int)((currentSpeed - maxSpeed) * 10)); }
	//艹输出单位一生之敌艹……………………………………
	else if (currentSpeed > maxSpeed * 1.2 && currentSpeed <= maxSpeed * 1.5) { POINT6(); printf("%d", (int)(maxSpeed * 0.2 * 10 + (currentSpeed - maxSpeed * 1.2) * 20)); }
	//艹这里本来以为可以优化的但是不行啊还有在正常范围内的情况…………
	//所以这个地方要想简化需要按大小顺序来写才能！！！
	else if (currentSpeed > maxSpeed * 1.5) { POINT12(); printf("%d", (int)(maxSpeed * 0.2 * 10 + maxSpeed * 0.3 * 20 + (currentSpeed - maxSpeed * 1.5) * 50)); }
	else { printf("0 0"); }
	return 0;
}