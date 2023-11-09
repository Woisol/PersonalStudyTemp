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

// #include<stdio.h>

// #define POINT0() printf("0 ")
// #define POINT3() printf("3 ");
// //看来这里用不用; 都不要紧
// #define POINT6() printf("6 ");
// #define POINT12() printf("12 ");

// int main(void)
// {
// 	int maxSpeed = 0, minSpeed = 0, currentSpeed = 0;
// 	scanf("%d %d %d", &maxSpeed, &minSpeed, &currentSpeed);
// 	// POINT0();
// 	if (maxSpeed <= minSpeed) { printf("-1 -1"); }
// 	else if (currentSpeed < minSpeed) { POINT3();printf("10"); }
// 	else if (currentSpeed > maxSpeed && currentSpeed <= maxSpeed * 1.2) { POINT3(); printf("%d", (int)((currentSpeed - maxSpeed) * 10)); }
// 	//艹输出单位一生之敌艹……………………………………
// 	else if (currentSpeed > maxSpeed * 1.2 && currentSpeed <= maxSpeed * 1.5) { POINT6(); printf("%d", (int)(maxSpeed * 0.2 * 10 + (currentSpeed - maxSpeed * 1.2) * 20)); }
// 	//艹这里本来以为可以优化的但是不行啊还有在正常范围内的情况…………
// 	//所以这个地方要想简化需要按大小顺序来写才能！！！
// 	else if (currentSpeed > maxSpeed * 1.5) { POINT12(); printf("%d", (int)(maxSpeed * 0.2 * 10 + maxSpeed * 0.3 * 20 + (currentSpeed - maxSpeed * 1.5) * 50)); }
// 	else { printf("0 0"); }
// 	return 0;
// }

//##################################################################################

//10-27
// #include<stdio.h>
// int main(void)
// {
// 	int hour = 0, min = 0;
// 	scanf("%d %d", &hour, &min);
// 	switch (hour)
// 	{
// 	case 0:printf("12:%2d AM", min);break;
// 	case 12:printf("12:%2d", min);break;
// 	default:
// 		if (hour > 12)
// 		{
// 			hour -= 12;
// 			printf("%d:%2d PM", hour, min);
// 		}
// 		else { printf("%d:%2d AM", hour, min); }

// 	}
// 	return 0;
// }
// #include<stdio.h>.
// int main(void)
// {
// 	unsigned int a = 0, b = 0, c = 0;
// 	scanf("%u %u %u", &a, &b, &c);
// 	if (a > b)
// 	{
// 		a += b;
// 		b = a - b;
// 		a -= b;
// 	}
// 	if (a > c)
// 	{
// 		a += c;
// 		c = a - c;
// 		a -= c;
// 	}
// 	if (b > c)
// 	{
// 		b += c;
// 		c = b - c;
// 		b -= c;
// 	}
// 	printf("%u %u %u", a, b, c);
// 	return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// 	// // int x = 3, y = 4, z = 5;
// 	// int a = 1, b = 3;
// 	// // printf("%d", !(x + y) + z - 1 && y + z / 2);
// 	// printf("%d", a + b && a - b && b - 3 && a || b);
// 	// char a = (-128) / (-1);
// 	// printf("%d", a);
// 	int a, b;
// 	if ((a = b;) >= 0)//嗯有；是会报错的
// 		return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// 	double temp = 0.0;
// 	char mode = 0;
// 	scanf("%lf%c", &temp, &mode);//啊啊啊艹double是%lf啊！！！！
// 	switch (mode)
// 	{
// 	case 'C':printf("%.2fF", (temp * 9.0 / 5.) + 32);break;
// 	case 'F': printf("%.2fC", (temp - 32) * 5.0 / 9);break;
// 	default:printf("error!");
// 	}
// 	return 0;
// }

// #include<stdio.h>
// int a = 0, b = 0, c = 0;
// void sort(int* a, int* b)
// {
// 	if (*a > *b)
// 	{
// 		*a += *b;
// 		*b = *a - *b;
// 		*a -= *b;
// 	}
// 	//啊啊啊艹注意传进来的是形参啊！！！！//？？？？？为什么放在还是不能改变？？
// 	//艹注意如果函数用的是()里面定义的参数那是覆盖全局变量的！！！你从局部转全局就会这样错！！！
// }
// int main(void)
// {
// 	int* pa = &a, * pb = &b, * pc = &c;

// 	// a = a < b ? a, b;
// 	// b = b < c ? b, c;


// 	scanf("%d %d %d", &a, &b, &c);
// 	sort(pa, pb);sort(pb, pc);sort(pa, pc);
// 	if (a + b <= c) { printf("Not a triangle"); }
// 	else if (a == b || a == c || b == c)
// 	{
// 		if (a == b && b == c) { printf("Equilateral"); }
// 		else { printf("Isosceles"); }
// 	}
// 	else
// 	{
// 		printf("Scalene");
// 	}
// 	return 0;
// }

// #include<stdio.h>
// int main(void)
// {
// 	int originalInput = 0, hour = 0, min = 0, changeTime = 0, changeHour = 0, changeMin = 0;

// 	scanf("%d %d", &originalInput, &changeTime);
// 	hour = originalInput / 100;
// 	min = originalInput % 100;

// 	changeHour = changeTime / 60 % 24;
// 	changeMin = changeTime % 60;
// 	hour -= changeHour;
// 	min -= changeMin;

// 	if (min < 0) { min += 60; hour -= 1; }
// 	if (hour < 0) { hour += 24; }

// 	printf("%02d%02d", hour, min);
// 	return 0;
// }

//*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*
//**#MS**？！
// #include<stdio.h>
// #include<stdbool.h>
// //像这种需要多次先后判断的如何快速理清思路？
// int main(void)
// {
// 	int year = 0, month = 0, day = 0, isYunYear = 0;
// 	bool isLegal = true;
// 	scanf("%d %d %d", &year, &month, &day);

// 	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { isYunYear = 1; }

// 	if (month < 1 || month >12) { isLegal = false;goto Judgement; }

// 	if (day < 1) { isLegal = false; }
// 	// else if (month == 2) { if (day > 28 + isYunYear) { isLegal = false; } }
// 	else
// 	{
// 		switch (month)
// 		{
// 		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
// 			if (day > 31) { isLegal = false; }break;
// 		case 4:case 6:case 9: case 11:
// 			if (day > 30)
// 			{
// 				isLegal = false;
// 			}break;
// 		case 2:
// 			if (day > 28 + isYunYear) { isLegal = false; }break;
// 		}
// 	}
// 	// else if (month == 2) { if (day > 28 + isYunYear) { isLegal = false; } }
// 	// else
// 	// {
// 	// 	switch (month)
// 	// 	{
// 	// 	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
// 	// 		if (day > 31) { isLegal = false; }break;
// 	// 	case 4:case 6:case 9: case 11:
// 	// 		if (day > 30)
// 	// 		{
// 	// 			isLegal = false;
// 	// 		}
// 	// 	}
// 	// }
// Judgement:
// 	isLegal ? printf("日期合法") : printf("日期不合法");
// 	printf("\n");main();
// 	return 0;
// }
//来自jh的代码（部分）：
// int s[13] = { -1, 1, -2, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1 };
// bool yes = y >= 0 && 1 <= m && m <= 12 && d >= 1 && (d <= 30 + s[m] + fg);
//思路是利用m定位数组的值！！！
//多利用计算而不是预先定义！找到month和限制范围之间的关系！！！没有线性关系就用数组


// //CT 2023-11-03 16:23
// //Purpose:剪刀石头布游戏
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(void)
// {
// 	srand((unsigned)time(NULL));
// 	int n = 0, round = 0, playerOps = 0, PCOps = 0, winPlayer = 0, winPC = 0;
// 	scanf("%d", &n);
// 	round = 2 * n + 1;
// 	for (int t = 0; t < round; t++)
// 	{
// 		scanf("%d", &playerOps);
// 		PCOps = rand() % 3;
// 		if (playerOps == 2 && PCOps == 1) { winPlayer++; }
// 		else if (playerOps == 1 && PCOps == 0) { winPlayer++; }
// 		else if (playerOps == 0 && PCOps == 2) { winPlayer++; }
// 		else { winPC++; }

// 		if (!(n + 1 - winPlayer) || !(n + 1 - winPC))
// 		{
// 			if (winPlayer > winPC) { printf("Player Win!"); }
// 			else { printf("PC Win!"); }
// 			break;
// 		}
// 	}
// 	return 0;
// }
// //EOF 2023-11-03 16:32


//CT 2023-11-03 17:58
//Purpose:关于阶乘39！？
// #include<stdio.h>
// int main(void)
// {
// 	long int num = 20, ans = 1;
// 	for (;num > 1;num--)
// 	{
// 		ans *= num;
// 		printf("%ld\n", ans);
// 	}
// 	//艹其实就是在于结果太大了……
// 	return 0;
// }


//CT 2023-11-03 18:14
//Purpose:攀登方法
#include<stdio.h>
unsigned long long int A(int m, int n)
{
	unsigned long long int ans = 1;
	for (;m > n;m--) { ans *= m; }
	return ans;
}
int main(void)
{
	int N = 0, step2 = 0, ways = 1;
	scanf("%d", &N);
	for (step2 = N / 2; step2 > 0; step2--)
	{
		ways += (int)(A(N - step2, N - 2 * step2) / A(step2, 1));
	}
	printf("%d", ways);
	main();
	return 0;
}