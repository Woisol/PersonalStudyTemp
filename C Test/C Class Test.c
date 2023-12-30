//Lib 2023-12-09 09:13
// #include "cctestio.c"

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
// #include<stdio.h>
// unsigned long long int A(int m, int n)
// {
// 	unsigned long long int ans = 1;
// 	for (;m > n;m--) { ans *= m; }
// 	return ans;
// }
// int main(void)
// {
// 	int N = 0, step2 = 0, ways = 1;
// 	scanf("%d", &N);
// 	for (step2 = N / 2; step2 > 0; step2--)
// 	{
// 		ways += (int)(A(N - step2, N - 2 * step2) / A(step2, 1));
// 	}
// 	printf("%d", ways);
// 	main();
// 	return 0;
// }

//##################################################################################
//PT 2023-11-17 18:11
//About:猫猫病毒(bushi)-V1
// #include"NoBlackWindows.c"
// int ifCountinue(int a[], int len, int* t, int max)
// {
// 	max += a[*t];
// 	(*t)++;//!woq取值的运算顺序真的低一定注意!
// 	for (;*t < len;(*t)++)
// 	{
// 		if (a[*t] >= 0) { max += a[*t]; }
// 		else break;
// 	}
// 	return max;
// }
// void newMain(void)
// {
// 	int a[] = { 1,2,3,4,5 };
// 	int len = sizeof(a) / sizeof(int);
// 	int max = 0, tempMax = 0, ifCountinueMax = 0;
// 	for (int t = 0;t < len;t++)
// 	{
// 		if (a[t] >= 0) { tempMax += a[t]; }
// 		else
// 		{
// 			int tempt = t;
// 			ifCountinueMax = ifCountinue(a, len, &t, tempMax);
// 			if (ifCountinueMax > tempMax + a[tempt]) { tempMax = ifCountinueMax; }
// 			max = tempMax > max ? tempMax : max;
// 			tempMax = 0;
// 		}
// 	}
// 	max = tempMax > max ? tempMax : max;
// 	nprintf("%d", max);
// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }

//PT 2023-11-17 19:22
//!About:猫猫病毒-2
// #include"NoBlackWindows.c"
// void newMain(void)
// {
// 	int a[] = { 1,2,-3,4,5 };
// 	// int a[] = { 14,11,17,11,-4,-11,-20,-7,-20,-19,18,-3,-15,-3,13,-17,-12,19,18,15,-6,1,7,-12,-4,-12,-18,-17,-11,20,20,9,18,16,-14,-1,-6,6,-5,-18,9,11,10,-16,0,-4,16,8,-12 };
// 	int len = sizeof(a) / sizeof(int);

// 	/*----------------------------思路3-----------------------------------------------------*/
// 	//!md好好想想你为什么会把思路搞得这么复杂^
// 	int max = 0, tempMax = 0;
// 	for (int start = 0;start < len;start++)
// 	{
// 		for (int end = start;end < len;end++)
// 		{
// 			for (int t = start;t <= end;t++)
// 			{
// 				tempMax += a[t];
// 			}
// 			max = tempMax > max ? tempMax : max;
// 			tempMax = 0;
// 		}
// 		// tempMax = 10;
// 	}
// 	/*----------------------------思路2-----------------------------------------------------*/
// 		// int breakPointCount = 0, addingPartCount = 0, res = 0;
// 		// int  breakPoint[len];
// 		// int addingPart[len];
// 		// for (int t = 0;t < len;t++) { breakPoint[t] = 0; addingPart[t] = 0; }
// 		// for (int t = 0;a[t] < 0;t++) { a[t] = 0; }//新思路,干脆把开头负值都删掉
// 		// for (int t = 0, toAdd = 0;t < len;t++)
// 		// {
// 		// 	if (a[t] >= 0 && toAdd == 1) { breakPointCount++; toAdd = 0; continue; }
// 		// 	if (a[t] < 0)//不想优化了
// 		// 	{
// 		// 		if (toAdd == 0)toAdd = 1;
// 		// 		breakPoint[breakPointCount] += a[t];
// 		// 	}
// 		// }
// 		// for (int t = 0, toAdd = 0;t < len;t++)
// 		// {
// 		// 	if (a[t] <= 0 && toAdd == 1) { addingPartCount++; toAdd = 0; continue; }
// 		// 	if (a[t] > 0)//不想优化了
// 		// 	{
// 		// 		if (toAdd == 0)toAdd = 1;
// 		// 		addingPart[addingPartCount] += a[t];
// 		// 	}
// 		// }
// 		// /*----------------------------旧思路-----------------------------------------------------*/
// 		// // for (int t = 0;t < len;t++)
// 		// // {
// 		// // 	if(a[t] < 0){continue;}
// 		// // 	addingPart[addingPartCount] += a[t];
// 		// // }


// 		// 	// 	for (int t = 0, isBegin = 0;t < len;t++)//旧思路,分情况讨论开头
// 		// 	// 	{
// 		// 	// 		if (t == 0 && a[t] < 0)
// 		// 	// 		{
// 		// 	// 			do
// 		// 	// 			{
// 		// 	// 				breakPoint[breakPointCount] += a[t]
// 		// 	// 			} while (a[t + 1] < 0);
// 		// 	// 				continue;
// 		// 	// 		}
// 		// 	// 		if (a[t] < 0)
// 		// 	// 		{
// 		// 	// 			do
// 		// 	// 			{
// 		// 	// 				breakPointCount += a[t];
// 		// 	// 			} while (a[t + 1] < 0);
// 		// 	// 				breakPointCount++;
// 		// 	// 				continue;
// 		// 	// 		}
// 		// 	// 		// 	if (isBegin == 0 && a[t] > = 0) { isBegin = 1; continue; }
// 		// 	// // else
// 		// 	// // {
// 		// 	// // 	breakPointCount[breakPointCount] += a[t];
// 		// 	// // }
// 		// 	// // breakPointCount[breakPointCount] += a[t];
// 		// 	// 	}
// 		// /*---------------------------------------------------------------------------------*/
// 		// // 	for (int t = 0; t < len;t++)//转换思路,把breakpoint也合并且意义由位置变为值!
// 		// // 	{
// 		// // 		if (a[t] < 0) { breakPoint[breakPointCount] = t; breakPointCount++; }
// 		// // 	}
// 		// // for (int t = 0;t < len;t++)
// 		// // {
// 		// // 	if (a[t] < 0) { continue; }
// 		// // 	addingPart[addingPartCount++] += a[t];
// 		// // }
// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }

//**PT 2023-11-17 22:40
//##About:Test2:螺旋打印
// #include"NoBlackWindows.c"
// void newMain(void)
// {

// 	int m = 3, n = 1;
// 	int matrix[m][n] = { 1, 2, 3 };//, 4, 5, 6, 7, 8, 9 , 10, 11, 12 ,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30
	// int* arr = matrix;//!注意数组指针的声明欸不能这样声明吗?...
	// for (int t = 0; t < m * n;t++)
	// {
	// 	*(matrix + t) = t + 1;//!欸C不能二维数组用一维读取的嘛,只能用指针,欸不能写入吗?
// 	}

	// int limm = 0, limn = 0, curn = 0, curm = 0;//!用limit的话无法及时限制到已打印的上、右端，导致无法及时检查边界
	// for (int t = 0;t < (m + 1) / 2;t++)
	// {
	// 	for (;curn < n - limn;curn++)
	// 	{
	// 		printf("%d ", matrix[curm][curn]);
	// 	}
	// 	curm++;
	// 	curn--;
	// 	for (;curm < m - limm;curm++)
	// 	{
	// 		printf("%d ", matrix[curm][curn]);
	// 	}
	// 	curm--;
	// 	curn--;
	// 	limm++;
	// 	for (;curn >= limn;curn--)
	// 	{
	// 		printf("%d ", matrix[curm][curn]);
	// 	}
	// 	curm--;
	// 	curn++;
	// 	for (;curm >= limm && curm < m - limm;curm--)
	// 	{
	// 		printf("%d ", matrix[curm][curn]);
	// 	}
	// 	curm++;
	// 	curn++;
	// 	limn++;
	// }
	//##################################################################################
	//**EOF 2023-11-19 10:00:00+
	//**----------------------------Rewrite-11-19-----------------------------------------------------*/
	// int curn = 0, curm = 0, minn = 0, minm = 0, maxn = n - 1, maxm = m - 1;
	// for (int t = 0;t < (m + 1) / 2;t++)
	// {
	// 	for (;minn <= curn && curn <= maxn;curn++)
	// 	{
	// 		printf("%d ", matrix[curm][curn]);
	// 	}
	// 	curn--;
	// 	minm++;
	// 	for (curm++;minm <= curm && curm <= maxm;curm++)
	// 	{
	// 		printf("%d ", matrix[curm][curn]);
	// 	}
	// 	curm--;
	// 	maxn--;
	// 	for (curn--;minn <= curn && curn <= maxn;curn--)//minn != maxn &&//!不能检查这个！不然会导致奇数列无法打印！解决单列问题需要其它方法
	// 	{
	// 		printf("%d ", matrix[curm][curn]);
	// 	}
	// 	curn++;
	// 	maxm--;
	// 	for (curm--;minm <= curm && curm <= maxm;curm--)//minm != maxm &&
	// 	{
	// 		printf("%d ", matrix[curm][curn]);
	// 	}
	// 	curm++;

	// 	minn++;
	// 	curn++;
	// }
	//**----------------------------GPT-----------------------------------------------------*/
	//???过了???为什么呜呜呜
	// int i, k = 0, l = 0;

	// while (k < m && l < n)
	// {
	// 	for (i = l; i < n; ++i)
	// 	{
	// 		printf("%d ", matrix[k][i]);
	// 	}
	// 	k++;

	// 	for (i = k; i < m; ++i)
	// 	{
	// 		printf("%d ", matrix[i][n - 1]);
	// 	}
	// 	n--;

	// 	if (k < m)//!K.P.最大区别就在这了…………
	// 	{
	// 		for (i = n - 1; i >= l; --i)
	// 		{
	// 			printf("%d ", matrix[m - 1][i]);
	// 		}
	// 		m--;
	// 	}

	// 	if (l < n)
	// 	{
	// 		for (i = m - 1; i >= k; --i)
	// 		{
	// 			printf("%d ", matrix[i][l]);
	// 		}
	// 		l++;
	// 	}
	// }
	//**----------------------------GPT-修改-----------------------------------------------------*/
// 	int curn = 0, curm = 0, minn = 0, minm = 0, maxn = n - 1, maxm = m - 1;
// 	for (int t = 0;t < (m + 1) / 2;t++)
// 	{
// 		for (;curn <= maxn;curn++)
// 		{
// 			printf("%d ", matrix[curm][curn]);
// 		}
// 		if (++minm > maxm) break;
// 		curn--;
// 		for (curm++;curm <= maxm;curm++)
// 		{
// 			printf("%d ", matrix[curm][curn]);
// 		}
// 		if (minn > --maxn) break;//!是的，修改后能通过就是在于在最后两个循环中检查了这两个……和前面那个是一样的
// 		curm--;
// 		for (curn--;curn >= minn;curn--)
// 		{
// 			printf("%d ", matrix[curm][curn]);
// 		}
// 		if (minm > --maxm) break;
// 		curn++;
// 		for (curm--;curm >= minm;curm--)
// 		{
// 			printf("%d ", matrix[curm][curn]);
// 		}
// 		if (++minn > maxn) break;
// 		curm++;
// 		curn++;
// 	}
// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }

//PT 2023-11-19 14:07
//About:字符压缩
//!艹所以你一开为什么要用getchar…………直接数组不就行…………
//呜啊这题终于能体现我NBW的优越啦哈哈哈！
// #include<string.h>
// #include"NoBlackWindows.c"
// void newMain(void)
// {
// 	char originalString[100] = { 0 };
// 	char zipedString[200] = { 0 };
// 	char tempString[3] = "00";
// 	int num = 1;
// 	char curChar = 0;

// 	nscanf("%s", originalString);
// 	sscanf(originalString, "%c", &curChar);
// 	for (int t = 1;t < strlen(originalString) + 1;t++)
// 	{
// 		if (originalString[t] == curChar) { num++; }
// 		else
// 		{
// 			tempString[0] = curChar;
// 			tempString[1] = num + 0x30;
// 			// itoa(num, &tempString[1], 1);
// 			strcat(zipedString, tempString);
// 			curChar = originalString[t];
// 			num = 1;
// 		}
// 		// switch (originalString[t])
// 		// {
// 		// case 'a':
// 		// }
// 	}
// 	nprintf("%s", strlen(originalString) >= strlen(zipedString) ? zipedString : originalString);
// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }

//PT 2023-11-19 15:17
//About:巨大数的加减法
//tdNBW无法输入多个数字………………
//!本质！
// #include<string.h>
// #include"NoBlackWindows.c"
// void newMain(void)
// {
// 	char num1[100] = { 0 };
// 	char num2[100] = { 0 };
// 	// char num1[100] = "1";
// 	// char num2[100] = "51";
// 	char ans[100] = { 0 };
// 	scanf("%s %s", num1, num2);
// 	int pos1 = strlen(num1), pos2 = strlen(num2), addNum = 0, maxpos = pos1 > pos2 ? pos1 : pos2, tmpint = 0;
// 	for (int t = 1;t <= maxpos;t++)
// 	{
// 		tmpint = (pos1 - t >= 0 ? num1[pos1 - t] - 48 : 0) + (pos2 - t >= 0 ? num2[pos2 - t] - 48 : 0) + addNum;
// 		if (tmpint > 9) { ans[maxpos - t] = tmpint % 10 + 48; addNum = 1; }
// 		else
// 		{
// 			addNum = 0;
// 			ans[maxpos - t] = tmpint + 48;
// 		}
// 		// addNum = tmpint / 10;
// 		// if (tmpint > 9) { addNum = 1; }
// 		// else { addNum = 0; }
// 	}
// 	if (addNum == 1)
// 	{
// 		for (int t = 0;t < maxpos;t++)
// 		{
// 			ans[maxpos - t] = ans[maxpos - t - 1];
// 		}
// 		ans[0] = '1';
// 	}
// 	printf("%s", ans);
// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }

//##################################################################################
/*----------------------------作业补交buffer-----------------------------------------------------*/
//PT 2023-11-19 16:26
//About:课后1
// #include<stdio.h>
// #include<math.h>
// int getNumOfNum(int num, int pos)
// {
// 	return num / (int)pow(10, 4 - pos) % 10;
// }
// void crackPassword(int pw)
// {
// 	int tmp = getNumOfNum(pw, 1) - getNumOfNum(pw, 4);
// 	if (tmp == 1 || tmp == -1)
// 	{
// 		if (getNumOfNum(pw, 2) == getNumOfNum(pw, 4) * 2)
// 		{
// 			if (getNumOfNum(pw, 3) == getNumOfNum(pw, 1) + getNumOfNum(pw, 4))
// 			{
// 				printf("密码破解成功。");return;
// 			}
// 		}
// 	}
// 	printf("密码破解失败。");
// }
// int main(void)
// {
// 	int pw = 0;
// 	scanf("%d", &pw);
// 	crackPassword(pw);
// 	return 0;
// }
/*---------------------------------------------------------------------------------*/
//PT 2023-11-19 16:36
//About:课后2
// #include<stdio.h>
// // 获取巧克力的价格
// float getChocolatePrice(char type, float weight)
// {
// 	switch (type)
// 	{
// 	case 'A':return 2.7;
// 	case 'B':return 3.8;
// 	default:return 0;
// 	}
// }

// // 计算总价格
// float calculateTotalPrice(char type, float weight)
// {
// 	return getChocolatePrice(type, weight) * weight;
// }

// int main()
// {
// 	char type = 0;
// 	float weight = 0;
// 	scanf("%c %f", &type, &weight);
// 	printf("总价格为%.2f元", calculateTotalPrice(type, weight));
// 	return 0;
// }
/*---------------------------------------------------------------------------------*/
//PT 2023-11-19 16:47
//About:课后2
// #include<stdio.h>
// #include<math.h>
// double calculateSquareRoot(int n)
// {
// 	return sqrt((double)n);
// }
// double calculateCubeRoot(int n)
// {
// 	return cbrt((double)n);
// }
// int main(void)
// {
// 	int N = 0;
// 	scanf("%d", &N);
// 	printf("平方根为%.2lf\n立方根为%.2lf", calculateSquareRoot(N), calculateCubeRoot(N));
// 	return 0;
// }
/*---------------------------------------------------------------------------------*/
//PT 2023-11-19 16:50
//About:课后4
// #include<stdio.h>
// #include<math.h>
// double calculateSequence(double n)
// {
// 	if (n == 1)return 3.;//!wok你还是犯了这个错………………用==啊！！！
// 	if (n == 2)return 4.;//!这个需要加吧？需要吧？
// 	return hypot(calculateSequence(n - 1), calculateSequence(n - 2));
// }
// double calculateSequenceSum(int N)
// {
// 	double sum = 0;
// 	for (;N > 0;N--)
// 	{
// 		sum += calculateSequence(N);
// 	}
// 	return sum;
// }
// int main(void)
// {
// 	int N = 0;
// 	scanf("%d", &N);
// 	printf("序列的和为%.3lf", calculateSequenceSum(N));
// 	return 0;
// }
/*---------------------------------------------------------------------------------*/

//##################################################################################
//td以下似乎都没有TN…………有空记得……上面可能也有。
//BOF 2023-11-24
//PT 2023-11-24 18:04
//About:Test4
// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
// 	int N = 0;
// 	char originalString[10001] = { 0 };
// 	char targetString[10001] = { 0 };
// 	N = 100;
// 	// scanf("%d", &N);
// 	for (;N > 0;N--)
// 	{
// 		// int times = 0, max = 0;
// 		// scanf("%s", originalString);scanf("%s", targetString);
// 		// int originalLen = strlen(originalString);
// 		// char tmpString[10001] = { 0 };
// 		// for (int t = 0;t < originalLen;t++)
// 		// {
// 		// 	strncpy(tmpString, originalString, strlen(targetString));
// 		// 	// if (strncmp(tmpString, originalString, strlen(targetString)) == 0)
// 		// 	// {
// 		// 	// 	times++;
// 		// 	// 	for (int t = 0;t < strlen(originalString);t++)
// 		// 	// 	{
// 		// 	// 		originalString[t] = originalString[t + strlen(targetString)];
// 		// 	// 	}
// 		// 	// }
// 		// 	// else
// 		// 	// {
// 		// 	// 	times > max ? max = times : 0;
// 		// 	// 	for (int t = 0;t < strlen(originalString);t++)
// 		// 	// 	{
// 		// 	// 		originalString[t] = originalString[t + 1];
// 		// 	// 	}
// 		// 	// }
// 		// 	/*---------------------------------------------------------------------------------*/
// 		// 	if (strcmp(tmpString, targetString) == 0)
// 		// 	{
// 		// 		times += strlen(targetString);
// 		// 		for (int t = 0;t < strlen(originalString);t++)
// 		// 		{
// 		// 			originalString[t] = originalString[t + strlen(targetString)];
// 		// 		}
// 		// 		for (int n = 0;;n++)
// 		// 		{
// 		// 			if (originalString[0] == targetString[n % (strlen(targetString) - 1)])
// 		// 			{
// 		// 				times++;
// 		// 				for (int t = 0;t < strlen(originalString);t++)
// 		// 				{
// 		// 					originalString[t] = originalString[t + 1];
// 		// 				}
// 		// 			}
// 		// 			else { break; }
// 		// 		}
// 		// 	}
// 		// 	else
// 		// 	{
// 		// 		times > max ? max = times : 0;
// 		// 		for (int t = 0;t < strlen(originalString);t++)
// 		// 		{
// 		// 			originalString[t] = originalString[t + 1];
// 		// 		}
// 		// 	}
// 		// }
// 		// times > max ? max = times : 0;
// 		// printf("%d\n", max);
// 	}
// 	return 0;
// }
//!用strncmp再写！！！

//PT 2023-11-24 18:33
//About:Test4Rewrite
// #include<stdio.h>
// #include<string.h>
// char originalString[10001] = "tbmygiajyerpkgmoudpalguqrvqewutpbntyoycdwgbnundrgdigvgbcrppyzclbbautnmgdtjuqutnmgdtjuutnmgdtjoql"; //{ 0 }
// void forward(int n)
// {
// 	for (int t = 0;t < strlen(originalString);t++)
// 	{
// 		originalString[t] = originalString[t + n];
// 	}
// }
// int main(void)
// {
// 	int N = 0;
// 	char targetString[10001] = "utnmgdtj";// { 0 }
// 	N = 1;
// 	// scanf("%d", &N);
// 	for (;N > 0;N--)
// 	{
// 		int times = 0, max = 0;
// 		// scanf("%s", originalString);scanf("%s", targetString);
// 		int tmpLen = strlen(originalString);//!md栽这里好多次啦！！一定注意不要用这个当for判断when数组变化！！！！
// 		for (int t = 0;t < tmpLen;t++)
// 		{
// 			if (strncmp(originalString, targetString, strlen(targetString)) == 0)
// 			{
// 				times += strlen(targetString);
// 				forward(strlen(targetString));
// 				for (int t = 0;t < tmpLen;t++)
// 				{
// 					if (originalString[0] == targetString[t % strlen(targetString)])
// 					{
// 						times++;
// 						forward(1);
// 					}
// 					else { times > max ? max = times : 0;times = 0; break; }
// 				}
// 			}
// 			else
// 			{
// 				times > max ? max = times : 0;
// 				times = 0;
// 				forward(1);
// 			}
// 		}
// 		times > max ? max = times : 0;
// 		printf("%d\n", max);
// 	}
// 	return 0;
// }

//##################################################################################
//**PT 2023-12-08 16:32
//**About:Week15 ClassTest1
// #include<string.h>
// void forward(char* endPos, char* maxPos)
// {
// 	char* curPos = endPos;
// 	for (;curPos < maxPos;curPos++)//!艹一开始思路就错了要从前往后覆盖啊啊啊…………
// 	{
// 		*curPos = *(curPos + 1);
// 	}
// 	*maxPos = 0;
// 	// maxPos--;//!艹都-了两次了还是过头，是因为函数内吗？这不是指针吗？
// 	//!是的看来这里好像还真改不了外面的maxPos………………
// }
// void reserveDigits(char* s)
// {
// 	char* pos = s, * maxPos = 0;
// 	for (;*pos;pos++);
// 	maxPos = --pos;
// 	// for (;*pos;pos--)//这样在最后再次--的时候会导致越界…………
// 	for (;pos >= s;pos--)
// 	{
// 		if ('0' > *pos || *pos > '9')
// 		{
// 			forward(pos, maxPos);
// 			maxPos--;
// 		}
// 	}
// }
// void reverseStr(char* s)
// {
// 	char tmpS[100] = { 0 };
// 	char* curS = s;
// 	for (int t = strlen(s) - 1;t > -1;t--)
// 	{
// 		tmpS[t] = *(curS++);//!艹又来………………用指针的时候不要随便对原数据操作啊！…………
// 	}
// 	if (strlen(tmpS) == 0)
// 	{
// 		strcpy(s, "NoDigits");
// 	}
// 	else
// 	{
// 		strcpy(s, tmpS);
// 	}
// }
// int main(void)
// {
// 	char string[] = "AAbbccDD";
// 	reserveDigits(string);
// 	reverseStr(string);
// 	main();
// 	return 0;
// }

//**PT 2023-12-08 17:35
//**About:ClassTest2
// #include<stdio.h>
// #include<string.h>
// void evenReverse(char* s)
// {
// 	char evenNum[50] = { 0 };
// 	int maxEven = (strlen(s) - 1) / 2;
// 	// for(;*s;s+=2);s-=2;//!这种写法还是很值得推崇的
// 	for (int t = 0;t <= maxEven;t++)
// 	{
// 		evenNum[t] = *(s + (2 * (maxEven - t)));
// 	}
// 	for (int t = 0;t < strlen(evenNum) + 1;t++)
// 	{
// 		*s = evenNum[t];s += 2;
// 	}
// }
// int main(void)
// {
// 	evenReverse("1234");
// 	return 0;
// }

//**PT 2023-12-08 17:54
//**About:Test2
// #include<stdio.h>
// #include<string.h>
// void myshift(char* s)
// {
// 	char oddNum[50] = { 0 };
// 	char evenNum[50] = { 0 };
// 	for (int t = 0; t < strlen(s) + 1;t++)
// 	{
// 		switch (t % 2)
// 		{
// 		case 0: evenNum[t / 2] = *(s + t);break;
// 		case 1: oddNum[t / 2] = *(s + t);break;
// 			//! ！！！对这种写法十分满意！！！
// 		}
// 	}
// 	*s = 0;
// 	strcpy(s, evenNum);strcat(s, oddNum);
// }
// int main(void)
// {
// 	char s[] = "0123";
// 	myshift(s);
// 	return 0;
// }

//**PT 2023-12-08 18:20
//**About:Test3
// #include<stdio.h>
// #include<stdlib.h>
// // #define clockwise(x) 2 * n - x//@又想当然……不是这种对应关系……
// int clockwiseY(double x, double n)//@其实这个反而是一开始的想法
// //!所以注意有时数学的建模思维还是很重要的！
// {
// 	x -= (n - 1) / 2;
// 	x = -x + (n - 1) / 2;//@服了还在想当然……变了中心以后再加减是不同的不要直接返回-x！
// 	return x;
// }
// void rotate(int** matrix, int n)
// {
// 	// if (n == 1)return;
// 	int tmpMatrix[n][n];
// 	// int curX = n - 1, curY = 0, dir = 0;//!又没有注意逻辑……一开始的时候就已经达到“边界”的条件要++了……
// 	//!所以总结是重点关注开头和结束？！

// 	for (int i = 0; i < n; i++)
// 		for (int j = 0; j < n; j++)
// 			tmpMatrix[j][clockwiseY(i, n)] = matrix[i][j];//!牢记那些常见的变换矩阵会很省时间…………
// 	//@这里想当然的认为[i][j]就是那样的顺序了，不过确实也是【划去】…………

// 		// int x[] = { 0,-1,0,1 };
// 		// int y[] = { 1,0,-1,0 };//@欸嘿用的是ls的方法哈哈
// 		// int limit[] = { 0,0,0,0 };
// 		// for (int t = 0;t < n * n;t++)//@漏写t++
// 		// {
// 			// tmpMatrix[curX][curY] = **(matrix + t);
// 			// if ((curX == n - limit[0] - 1) && (curY == limit[3]))dir = 0;
// 			// else if ((curX == n - limit[0] - 1) && (curY == n - limit[1] - 1))dir = 1;
// 			// else if ((curX == limit[2] +  1) && (curY == limit[3]))dir = 2;
// 			// else if ((curX == n - limit[0] - 1) && (curY == limit[3]))dir = 0;//!放弃……其实思路根本就和螺旋打印不同…………
// 			// if (curY > n - limit[1] - 2)//@而且还有问题，你这样的写法会导致在一行上面每一个元素都满足边界都要拐弯………………
// 			// {
// 			// 	limit[]++;dir++;//@服了你了……这个时候该加的不是同一边的而是上一边的…………
// 			// }
// 			// else if (curX < limit[1])
// 			// {
// 			// 	limit[0]++;dir++;
// 			// }
// 			// else if (curY < limit[2])//@这里逻辑也出问题……一开始的时候就满足了导致一直都是这里……
// 			// 	//!不过这也体现了用数组预定数据的好处很方便修改
// 			// {
// 			// 	limit[1]++;dir++;
// 			// }
// 			// else if (curX > n - limit[3] - 2)
// 			// {
// 			// 	limit[2]++;dir++;
// 			// }
// 		// curX += x[dir / 4];curY += y[dir / 4];//@艹……+=打成==…………………………
// 		// }
// 	// for (int i = 0; i < n; i++)
// 	// 	for (int j = 0; j < n; j++)
// 	// 		tmpMatrix[i][j] = matrix[i][j];
// 	for (int t = 0;t < n * n; t++)
// 	{
// 		// *((*matrix) + t) = *((*tmpMatrix) + t);//!请注意二维数组用*必须用两个！//!咳咳这里是用的指针形式所以用**反而会导致一维数组越界
// 		//!via ls！！！请记死这个写法！要回到“地址的地址”这个本质上！！！而不是简单的*或者**！！！
// 		//!不这个写法也是错误的……具体总结见下
// 	}

// }
// int main(void)
// {
// 	int n = 3;
// 	// int** matrix; //= { 1,2,3,	4, 5, 6,7,8,9 };//td不要忘记换行是用反的！！！艹为什么还是没办法换行写…………查查？
// 	//!艹服了这里初始化极其麻烦用**说scalar object 'matrix' requires one element in initializer用[3][3]又是下面这个………………
// 	int t = 0;
// 	int** matrix = (int**)malloc(n * sizeof(int*));//@啊这两个都要？？？额是你自己不看清楚……这里是申请指针的内存哈哈
// 	for (int i = 0; i < n; i++)
// 		matrix[i] = (int*)malloc(n * sizeof(int));//!请注意这里如果不申请内存是会段错误的

// 	for (int i = 0; i < n; i++)
// 		for (int j = 0; j < n; j++)
// 			matrix[i][j] = ++t;//!艹你输入的数据和幻想的不同……………………………………………………搞得debug这么久都不知道其实得了/哭

// 	rotate(matrix, n);//@can't convert *int[3] to **int………………
// 	for (int i = 0; i < n; i++)
// 		free(matrix[i]);//@妈耶就是这里free不了……
// 	free(matrix);
// 	//！大问题！！！@NB：
// 	//！对于二维数组的指针访问，考虑到“地址的地址”的本质，使用*当然不对，而使用**只能读取第一行
// 	//！但NB给出了一个方法，使用一维指针指向&a[][]后就可以使用指针来访问了
// 	//！但是这样要求内存是连续的
// 	//！在本题中矩阵的内存是每列各自malloc的就恶心…………
// 	main();
// 	return 0;
// }
//##################################################################################
//**PT 2023-12-09 09:01
//##About:
//##这题基本把指针和数组的玩法都给你了……好好看看……
// #include<stdio.h>
// int matrix[3][3] = { 0 };//@这个不放在上面监视不了就烦……
// void matrixInput(int(*mat)[3])
// {
// 	int tmpNum = 0;//！又犯了每次循环都重置为0的毛病…………
// 	for (int i = 0;i < 3;i++)
// 	{
// 		for (int j = 0;j < 3;j++)
// 		{
// 			// scanf("%d", &tmpNum);
// 			(*(mat + i))[j] = ++tmpNum;//!请注意运算顺序是() -> [] -> *
// 			// (*mat + i)[j] = ++tmpNum;//@开始的写法……自己注意吧
// 		}
// 	}
// }

// void matrixAddT(int* mat)//!这个思路也很强！！你的逻辑果然还是太差了好好练练……
// {
// 	for (int i = 0;i < 3; i++)
// 		for (int j = 2;j >= i; j--)
// 		{
// 			*(mat + i * 3 + j) += *(mat + j * 3 + i);//!说起来这个刚好也是昨晚NB说的，这种形式就可以访问全部元素
// 			//！wok…………是思路错了……左上三角加过以后右下三角再加就又加多了…………
// 		}
// 	for (int i = 1; i < 3;i++)
// 		for (int j = 0; j < i;j++)
// 			*(mat + i * 3 + j) = *(mat + j * 3 + i);
// }

// void matrixPrint(int* mat[3])
// {
// 	for (int i = 0;i < 3;i++)
// 	{
// 		for (int j = 0;j < 3;j++)
// 		{
// 			printf("%d ", *((mat[i]) + j));
// 			// printf("%d ", *(mat[i]) + j);
// 		}
// 		printf("\n");
// 	}
// }

// int main(void)
// {
// 	int t = 0;
// 	for (int i = 0; i < 3; i++)
// 		for (int j = 0; j < 3; j++)
// 			matrix[i][j] = ++t;
// 	matrixInput(matrix);
// 	matrixAddT(&matrix[0][0]);
// 	int* p[3] = { NULL, NULL, NULL };
// 	for (int row = 0; row < 3; row++)
// 		*(p + row) = *(matrix + row);

// 	// print result
// 	matrixPrint(p);
// 	main();
// 	return 0;
// }


//**PT 2023-12-09 10:08
//##About:Test4,干脆直接顺便写了冒泡…………
// #include<stdio.h>
// // void merge(int* arr, int start, int mid, int end)
// // {
// // 	char flag = 0, pos = 0;
// // 	for(int t = end;t >= start; t --)
// // 	{
// // 		for( int t = start; t < end)
// // 	}
// // }
// int array[4] = { 0,1,3,2 };
// void mergeSort(int* arr, int start, int end)
// {
// 	char flag = 0, pos = 0;
// 	for (int t = 0; t < end - start + 1; t++, flag = 0)
// 	{
// 		for (int t = start; t < end; t++)
// 		{
// 			if (*(arr + t) > *(arr + t + 1))
// 			{
// 				flag = 1;
// 				*(arr + t) += *(arr + t + 1);
// 				*(arr + t + 1) = *(arr + t) - *(arr + t + 1);
// 				*(arr + t) = *(arr + t) - *(arr + t + 1);
// 			}
// 		}
// 		if (flag == 0)break;
// 	}
// }
// //@az题目是什么？读不懂不想读不用读/笑
// int main(void)
// {
// 	mergeSort(array, 0, 3);
// 	return 0;
// }

//~~PT 2023-12-09 10:45
//~~About:R.P.putchar
//~~ #include<stdio.h>
//~~ int main(void)
//~~ {
//~~ 	putchar()
//~~ 		return 0;
//~~ }
//##################################################################################
//**PT 2023-12-11 15:56
//tdAbout:螺旋打印的另一个思路：标记拐弯点？！
// #include<stdio.h>
// int main(void)
// {

// 	return 0;
// }

//##################################################################################
//**PT 2023-12-15 16:30
//**About:ClassTest1
// #include<stdio.h>
// #include<string.h>
// void switchArray(int, int, int*, int*);//！这种可变长的没办法用全局变量……老老实实传进去吧
// int main(void)
// {
// 	int n = 0;
// 	scanf("%d", &n);
// 	char strArray[n][100];
// 	int  order[n] = { 0 }, arrayLen[n] = { 0 };
// 	// for (int t = 0; t < n;t++)
// 	//!不用两次循环了都一样的放一起吧
// 	for (int t = 0;t < n;t++)//!真的服了你了…………不要随便修改原值…………后面要用你都不知道……
// 	{
// 		order[t] = t;
// 		scanf("%s", strArray[t]);
// 		arrayLen[t] = strlen(strArray[t]);
// 	}
// 	for (int loop = 0; loop < n; loop++)//td对简单排序不熟悉，就是那个依次选取最小的那个……
// 		for (int t = 0;t < n - 1;t++)
// 		{
// 			if (arrayLen[t] > arrayLen[t + 1])switchArray(t, t + 1, order, arrayLen);
// 		}
// 	for (int t = 0;t < n;t++)
// 	{
// 		printf("%s\n", strArray[order[t]]);//！这个定一个顺序数组的方法也不错以后可以借鉴借鉴
// 	}
// 	return 0;
// }
// void switchArray(int a, int b, int* porder, int* parraLen)
// {
// 	int* order = porder, * arrayLen = parraLen;
// 	order[a] += order[b];
// 	order[b] = order[a] - order[b];
// 	order[a] = order[a] - order[b];
// 	arrayLen[a] += arrayLen[b];
// 	arrayLen[b] = arrayLen[a] - arrayLen[b];
// 	arrayLen[a] = arrayLen[a] - arrayLen[b];
// }

//**PT 2023-12-15 17:05
//**About:ClassTest2
// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
// 	int n = 0, studentRemain = 0;
// 	scanf("%d", &n);
// 	studentRemain = n;
// 	char isOut[n] = { 0 };
// 	memset(isOut, n, sizeof(char));
// 	int curSign = 1, curStudent = 0;//!这个curSign被迫改了…………（并没有）
// 	for (;studentRemain > 1;curStudent = (++curStudent) % n)//！注意这里也要考虑到一次循环后要回到数组起点…………
// 		//!啊为什么老是写成/而不是%？？？？
// 		//!服了数组下标和实际是真的难崩艹……
// 		//！请注意有时候真的要老老实实静下心来好好跟着程序走一遍才知道哪里出问题的……
// 	{
// 		if (!isOut[curStudent])
// 		{
// 			if (curSign == 3)
// 			{
// 				isOut[curStudent] = 1;
// 				studentRemain--;
// 			}
// 			curSign = curSign % 3 + 1;
// 			// curSign = (++curSign) % studentRemain;//!你个…………而且为什么要curSign++？？明明都已经是赋值了…………
// 			// curStudent = (++curStudent) % studentRemain;//!这个一样只有在没有out时才能迭代！！//额不对…………
// 		}
// 	}
// 	for (int t;t < n;t++)
// 	{
// 		if (!isOut[t]) { printf("%d", t + 1);return 0; }
// 	}
// 	// do
// 	// {
// 	// 	if (!isOut[curStudent])
// 	// 	{
// 	// 		curStudent++;
// 	// 		if (curSign++ == 3)
// 	// 		{

// 	// 		}
// 	// 	}
// 	// } while (studentRemain > 0)//!混乱……重写
// 		// for(int t = 0,cur = 3;t < n -1 ;t++,cur+= 2)
// 	// {
// 	// 	isOut[cur/n - 1] = 1;
// 	// }
// 	//!思路不对…………out了的是不算在里面了的…………
// 	main();
// 	return 0;
// }

//**PT 2023-12-15 17:59
//**About:Test1
// #include<stdio.h>
// int main(void)
// {
// 	int n = 0, size = 0;

// 	scanf("%d %d", &n, &size);//！记得这种写法了，以后别写两个了…………
// 	int a[size + 1] = { 0 };
// 	a[size] = n;
// 	// for (;size >= 0;)//!额这次果然还是不行…………
// 	for (int t = 0;t < size;)//！可以的，按照这样的思路：要用原始数据之前先问问自己后面要不要用到就行
// 	{
// 		scanf("%d", &a[t++]);//!艹没想到你有一天也会忘记这个&………………
// 	}
// 	for (int isSorted = 0, isOperated = 0;!isSorted;isOperated = 0)//!对其实也不需要判断最多循环次数小于个数……不论如何到最后一定是排好序了的所以只要判断这个就行
// 	{
// 		for (int cur = 0;cur < size;cur++)
// 		{
// 			if (a[cur] > a[cur + 1])
// 			{
// 				a[cur] += a[cur + 1];a[cur + 1] = a[cur] - a[cur + 1];a[cur] -= a[cur + 1];
// 				isOperated = 1;
// 			}
// 		}
// 		if (!isOperated) { isSorted = 1; }//！…………这个为什么是写在里面？？？？
// 	}
// 	for (int t = 0;t < size + 1;t++)
// 		printf("%d", a[t]);
// 	//td尝试优化冒泡算法到最简！
// 	//!而且你一点都不熟悉…………这个冒泡写了巨久……好好理理思路吧你…………
// 	return 0;
// }

//**PT 2023-12-15 18:26
//**About:Test2
// #include<stdio.h>
// #include<ctype.h>//！好用的库！！
// //td学学！！
// #include<string.h>
// void reverseWords(char* sentence, int len)
// {
// 	// char *pSentence[end - start +1] = sentence
// 	for (int t = 0;t < (len - 2) / 2 + 1; t++)
// 	{
// 		if (len < 2)return;//！注意！！！这个交换算法在交换一个元素的时候会出问题！！！你自己加加看……
// 		sentence[t] += sentence[len - t - 1];
// 		sentence[len - t - 1] = sentence[t] - sentence[len - t - 1];
// 		sentence[t] -= sentence[len - t - 1];//!嗯这个算法已经比较熟了哈哈
// 	}

// }
// int main(void)
// {
// 	char sentence[100] = "";

// 	scanf("%[^\n]*", sentence);//！芜湖默写成功，记得这个*是在后面！
// 	// gets(sentence);//！gets不熟悉…………所以
// 	// strcspn(sentence, "\n");//！！！！in string.h用来除去字符串中的特定字符！！！记住啦！
// 	char* sentencePos = sentence;
// 	int len = 0;
// 	for (;*sentencePos;)
// 	{
// 		for (len = 0;*sentencePos && !ispunct(*sentencePos) && !isspace(*sentencePos);sentencePos++, len++);
// 		reverseWords(sentencePos - len, len);
// 		for (;*sentencePos && (ispunct(*sentencePos) || isspace(*sentencePos));sentencePos++);
// 		//！这两个函数也好用！判断是不是标点！！！
// 	}
// 	printf("%s", sentence);
// 	main();
// 	return 0;
// }

//**PT 2023-12-15 19:56
//**About:Test3
// #include<stdio.h>
// #include<stdlib.h>
// void sort(int* a, int n)
// {
// 	for (;;)
// 	{
// 		int isOperated = 0;
// 		for (int t = 0;t < n - 1;t++)
// 		{
// 			if (a[t] > a[t + 1]) { a[t] += a[t + 1]; a[t + 1] = a[t] - a[t + 1]; a[t] -= a[t + 1]; isOperated = 1; }
// 		}
// 		if (!isOperated)return;
// 	}
// }
// int main(void)
// {
// 	int nA = 0, nB = 0;
// 	scanf("%d", &nA);
// 	int A[nA] = { 0 };
// 	for (int t = 0;t < nA;t++)
// 		scanf("%d", &A[t]);
// 	scanf("%d", &nB);
// 	int B[nB] = { 0 };
// 	for (int t = 0;t < nB;t++)
// 		scanf("%d", &B[t]);
// 	int startPos = 0;

// 	sort(A, nA);sort(B, nB);
// 	// qsort(A, nA);qsort(B, nB);//！az在stdlib里面额好吧还不会用哈哈
// 	//td学一下qsort啦！
// 	for (int a = 0, b = 0;a < nA;a++)
// 	{
// 		if (A[a] == B[b])
// 		{
// 			if (b == 0) { startPos = a; }
// 			if (++b == nB) { printf("Yes,%d", startPos);return 0; }
// 		}
// 	}
// 	printf("No");
// 	main();
// 	return 0;
// }

//**PT 2023-12-15 20:23
//**About:Test4
//！wok本题绝对简单的要死你搞这么久…………
//！就是最简单的向后传递问题…………
//！说明完全不熟…………
// #include<stdio.h>
// // void switch (char* cup, int a, int B)//！艹重名了…………expected unqualified-id before 'switch'
// void Switch(char* cup, int a, int b)//艹搞反了不过改一下ab就可以/笑
// {
// 	cup[a] += cup[b];
// 	cup[b] = cup[a] - cup[b];
// 	cup[a] -= cup[b];
// }
// int main(void)
// {
// 	char cup[101] = { 0 };//！其实为了防乱也可以把第一个元素忽略掉？？！！
// 	int n = 0, m = 0;
// 	scanf("%d %d", &n, &m);
// 	cup[n] = 1;
// 	char tmpChar = 0;

// 	// cup[3] = cup[99];//！但是这样会导致丢失了2的数据…………
// 	tmpChar = cup[99];
// 	for (int t = 6;t < 100;t += 3) { cup[t] = cup[(t - 3)]; }
// 	cup[3] = tmpChar;
// 	tmpChar = cup[100];
// 	for (int t = 4;t < 101;t += 2) { cup[t] = cup[(t - 2)]; }
// 	cup[2] = tmpChar;
// 	// for (int t = 0;t < 100;t += 2)
// 	// {
// 	// 	// Switch(cup, t / 100, (t + 2) / 100);//!服了你了根本就不是交换…………害
// 	// }
// 	if (cup[m])printf("Yes!");
// 	else printf("No!");
// 	return 0;
// }

//##################################################################################
//**PT 2023-12-22 16:09
//##About:关于三目运算符的嵌套？！！
// #include<stdio.h>
// int main(void)
// {
// 	double num = 0;
// 	// char sgn = 0;
// 	scanf("%lf", &num);
// 	// sgn = (int)num % 1;//不对这个思路都不对哈哈算了判断吧
// 	// printf("%d",sgn);

// 	num > 0 ? printf("1") : num < 0 ? printf("-1") : printf("0");//！艹哈哈就是这里，三目运算符的嵌套！
// 	//！欸可以不用括号？！
// 	//dtd而且为什么只用一个;？
//！本身三目运算符就需要一个;但是一个结构里面估计就不用了吧
// 	main();
// 	return 0;
// }

//**PT 2023-12-22 16:46
//**About:Test5
// #include<stdio.h>
// int main(void)
// {
// 	long n = 0, a = 0, m = 0, x = 0;
// 	scanf("%d", &n);
// 	for (;n > 0;n--)
// 	{
// 		scanf("%ld %ld", &a, &m);
// 		for (x = 0;x < a + 1;x++)
// 		{
// 			if (a * x % m == 1)
// 				// if(!(a * x % m)-1)//！注意这种方式是不对的！！可能负数的时候是不算true吧！
// 			{
// 				printf("%ld\n", x);goto Out;
// 			}
// 		}
// 		printf("false\n");
// 	Out:
// 	}
// 	return 0;
// }

//**PT 2023-12-22 16:47
//##About:丑数新思路！！
//！很妙的思路！！
//td看看你之前是怎么写的？？
// #include<stdio.h>
// int main(void)
// {
// 	int n = 0;
// 	scanf("%d", &n);
// 	if (!n) { printf("false");return 0; }
// 	while (!(n % 2))n /= 2;
// 	while (!(n % 3))n /= 3;
// 	while (!(n % 5))n /= 5;
// 	if (n == 1)printf("true");
// 	else printf("false");
// 	return 0;
// }

//**PT 2023-12-22 16:51
//**About:TestH7
//!fuc好好反思…………其实思路还是很简单的你搞了这么久…………
// #include<stdio.h>
// unsigned int ow1 = 0, ow2, ow3;
// inline int getCertainNum(int n, int pos)
// {
// 	return ow1 = n << (pos - 1) >> 31;
// }
// inline int judgeNum(unsigned int n)
// {
// 	for (int t = 1;t < 17;t++)
// 	{
// 		if (getCertainNum(n, t) != getCertainNum(n, 33 - t))return 0;//!md逻辑错误这么久没发现……有一个错误就不得而不是有一个正确就得！！！
// 	}
// 	return 1;
// }
// int main(void)
// {
// 	//!上次做这题是期中吗？(是的)这次有时间好好看题以后感觉还是比较容易的？至少能看懂了
// 	unsigned int n = 0, T = 0;
// 	// scanf("%u", &T);//!啊注意是%u不是%ud啊！不然就只读了d啦！！！[NOT]
// 	for (;;T--)//T > 0
// 	{
// 		scanf("%u", &n);
// 		for (int k = 1;k < 32;k++)
// 		{
// 			// if (n == (ow = (n << k) | (n >> (32 - k)))) { printf("true%d\n", k);goto Out; }//!艹……不审题…………是和交换后的相同！！！
// 			if (judgeNum((n << k) | (n >> (32 - k)))) { printf("true%d\n", k);goto Out; }
// 		}
// 		printf("false\n");
// 	Out:continue;;//！没有一个语句就会expected primary-expression before '}' token？？？
// 	}
// 	return 0;
// }

//**PT 2023-12-22 17:40
//**About:ClassTest1
// #include<stdio.h>
// int main(void)
// {
// 	int n = 0;
// 	scanf("%d", &n);
// 	if (!n) { printf("QiDong");return 0; }
// 	int order[n];
// 	char class_name[n][16];
// 	int starTime[n], endTime[n];
// 	for (int t = 0;t < n;t++) { scanf("%s %d %d", class_name[t], &starTime[t], &endTime[t]); }
// 	// for (int t = 0;t < n;)order[t] = t++;//td？？？这里为什么不行？？
// 	for (int t = 0;t < n;t++)order[t] = t;

// 	//**----------------------------冒泡-----------------------------------------------------
// 	//！舍！用冒泡必须要求原数据调序简单！像这种调序极其麻烦！！！
// 		// for(int t = 0,isOperated = 0;t < n;t++,isOperated = 0)
// 		// {
// 		// 	for(int t = 0;t < n; t++)
// 		// 	{
// 		// 		if()
// 		// 	}
// 		// }

// 	//**----------------------------旧排序方法-简单排序-----------------------------------------------------
// 		//!用简单排序法，但是思路都错了
// 		//td看看哪里除了问题&修改！
// 		// for (int t = 0;t < n; t++)
// 		// {
// 		// 	static int tmpmin = 23;
// 		// 	for (int a = 0;a < n; a++)
// 		// 	{
// 		// 		if (tmpmin > starTime[a]) { order[t] = a;tmpmin = starTime[a]; }//!请注意这种方法如果这样可能会漏掉第一个…………
// 		// 	}//!md你个舍，都没有去掉已经排入了的最小time…………往后循环肯定是一样的结果啊！！！
// 		// }
// 	//**----------------------------EOF 旧排序方法-简单排序-----------------------------------------------------
// 	//##----------------------------新简单排序法-----------------------------------------------------
// 	//！复习：hello算法中是将排序的放在末尾再用n-1来取未排序区间…………
// 	//!但是你这里不能对原数据排序所以…………麻了
// 	for (int lastMin = 0, o = 0;o < n;o++)
// 	{
// 		int curMin = 23;//!又犯了每次循环都赋值为0的毛病…………
// 		//！如何避免这些低级错误？：好好思考！！想好了再写！！！
// 		for (int t = 0;t < n;t++)//curMin = 23………………搞了这个又保存不了curMin了………………
// 		{
// 			if (starTime[t] > lastMin && starTime[t] < curMin) { curMin = starTime[t]; order[o] = t; }//lastMin如果在这里就修改了那后面就没办法判断了…………
// 		}
// 		lastMin = curMin;

// 	}
// 	for (int t = 0;t < n;t++) { printf("%02d:00 ~ %02d:00 : %s\n", starTime[order[t]], endTime[order[t]], class_name[order[t]]); }
// 	return 0;
// }
//**PT 2023-12-22 18:04
//**About:ClassTest1: OuterAnswer
// #include<stdio.h>
// int n;
// #define N 30011
// struct node
// {
// 	char name[101];
// 	int s, e;
// }cla[N];
// int main()
// {
// 	scanf("%d\n", &n);
// 	if (n == 0)
// 	{
// 		printf("QiDong\n");return 0;
// 	}
// 	for (int i = 1;i <= n;i++)
// 	{
// 		scanf("%s", cla[i].name);
// 		scanf("%d%d\n", &cla[i].s, &cla[i].e);
// 	}
// 	for (int i = 1;i <= 24;i++)
// 	{
// 		for (int j = 1;j <= n;j++)
// 		{
// 			if (cla[j].s == i)
// 			{
// 				if (cla[j].s < 10) printf("0");
// 				printf("%d:00 ~ ", cla[j].s);
// 				if (cla[j].e < 10) printf("0");
// 				printf("%d:00 : ", cla[j].e);
// 				printf("%s", cla[j].name);
// 				printf("\n");
// 				break;
// 			}
// 		}
// 	}
// }

//**PT 2023-12-22 18:03
//**About:ClassTest2: OuterAnswer
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// struct ListNode
// {
// 	int val;
// 	struct ListNode* next;
// };

// struct ListNode* addNode(int val) {
// 	struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode));
// 	p->val = val;
// 	p->next = NULL;
// 	return p;
// }

// void freeList(struct ListNode* head) {
// 	if (head == NULL)   return;
// 	freeList(head->next);
// 	head->next = NULL;
// 	free(head);
// }

// void printList(struct ListNode* head) {
// 	if (head == NULL)
// 	{
// 		puts("NULL");
// 		return;
// 	}
// 	while (head)
// 	{
// 		printf("%d ", head->val);
// 		head = head->next;
// 	}
// 	puts("");
// }

//**----------------------------作答部分-----------------------------------------------------
// struct ListNode* deleteNodeOfList(struct ListNode* list, int value);
// struct ListNode* deleteNodeOfList(struct ListNode* list, int value)
// {
// 	struct ListNode* last = (struct ListNode*)malloc(sizeof(struct ListNode));
// 	last = list;
// 	struct ListNode* heads = (struct ListNode*)malloc(sizeof(struct ListNode));
// 	heads = list;
// 	if (list == NULL) return NULL;
// 	if ((list->val) == value)
// 	{
// 		return list->next;
// 	}
// 	while (list != NULL)
// 	{
// 		if ((list->val) == value)
// 		{
// 			last->next = list->next;break;
// 		}
// 		last = list;
// 		list = list->next;
// 	}
// 	return heads;
// }
//**----------------------------EOF 作答部分-----------------------------------------------------
// int main() {
// 	int n, value;
// 	scanf("%d %d", &n, &value);

// 	struct ListNode* head = addNode(-1), * cur = head;
// 	for (int i = 1, x; i <= n; ++i)
// 	{
// 		scanf("%d", &x);
// 		cur->next = addNode(x);
// 		cur = cur->next;
// 	}

// 	struct ListNode* res = deleteNodeOfList(head->next, value);
// 	printList(res);
// 	freeList(res);
// 	free(head);
// 	return 0;
// }

// //**----------------------------能过的-----------------------------------------------------
// #include <stdlib.h>
// #include "ListNode.h"


// struct ListNode* deleteNodeOfList(struct ListNode* list, int value) {
// 	struct ListNode* delete = (struct ListNode*)malloc(sizeof(struct ListNode));
// 	delete->next = list;
// 	struct ListNode* cur = delete;
// 	while (cur->next)
// 	{
// 		if (cur->next->val == value)
// 		{
// 			struct ListNode* tmp = cur->next;
// 			cur->next = tmp->next;
// 			free(tmp);
// 			break;
// 		}
// 		cur = cur->next;
// 	}
// 	struct ListNode* res = delete->next;
// 	free(delete);
// 	return res;
// }

//**PT 2023-12-22 20:07
//##About:列表中的结构体和指针
//！不熟悉！看！
//td未完成麻了烦死
// struct ListNode
// {
// 	int val;
// 	struct ListNode* next;
// };//！注意跨文件时必须要再声明一遍结构体！

// struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
// {
// 	struct ListNode* curPtr = NULL, * heading = NULL;//！再次强调指针多定义需要每个前面都加上*！
// 	if (list1->val < list2->val)
// 	{
// 		heading = curPtr = list1;
// 		list1 = list1->next;
// 	}
// 	else
// 	{
// 		heading = curPtr = list2;
// 		list2 = list2->next;
// 	}


// 	while (list1 != NULL || list2 != NULL)//curPtr//！额不能这样写？
// 	{
// 		if (list1 == NULL) { curPtr->next = list2;list2 = list2->next; }
// 		else if (list2 == NULL) { curPtr->next = list1;list1 = list1->next; }
// 		// if (list1 == NULL && list2 == NULL) { break; }//!按NB的做法这里要放在while里面判断
// 		else if (list1->val < list2->val)
// 		{
// 			curPtr->next = list1;
// 			list1 = list1->next;
// 			// curPtr = curPtr->next;//!这个可以放在后面了……
// 		}
// 		else
// 		{
// 			curPtr->next = list2;
// 			list2 = list2->next;
// 		}
// 		curPtr = curPtr->next;
// 	}
// 	return heading;
// }

//**PT 2023-12-29 16:57
//**About:ClassTest1
// #include <stdio.h>
// #include<stdlib.h>

// struct Node
// {
// 	struct Node* next;
// 	int value;
// };
// void insert(struct Node** head, int num)
// {
// 	struct Node* newNode = NULL;
// 	struct Node* curNode = *head;


// 	if ((*head) == NULL)//~~这个()是确实要的！！不要会报错！！（额并不是）
// 	{
// 		(*head) = (struct Node*)malloc(sizeof(struct Node));//！az注意结构体的指针必须要在转化类型！
// 		(*head)->value = num;
// 		(*head)->next = NULL;
// 		return;
// 	}
// 	newNode = (struct Node*)malloc(sizeof(struct Node));
// 	newNode->value = num;
// 	// if ((*head)->next = NULL)
// 	// {
// 	// }//!不应该用这种思路……即使到了后面依然可能出现要在第一个位置插的情况！
//！再次明确啦！先想好再写！慢才是快！不然改半天你………………
// 	while (curNode->next != NULL && curNode->next->value < num)
// 		curNode = curNode->next;
// 	if (curNode->value < num)
// 	{
// 		newNode->next = curNode->next;
// 		curNode->next = newNode;
// 	}
// 	else
// 	{
// 		newNode->next = curNode;
// 		(*head) = newNode;
// 	}
// }

// void print_linklist(struct Node* head)
// {
// 	while (head != NULL)
// 	{
// 		printf("%d ", head->value);
// 		head = head->next;
// 	}
// }

// void delete_linklist(struct Node* head)
// {
// 	struct Node* lastNode = NULL;
// 	while (head != NULL)
// 	{
// 		lastNode = head;
// 		head = head->next;//！记住这个思路啦！常用的！
// 		//	free(lastNode->next);//！区分free是free指向的东西而不是指针本身！！！感谢ls不然要卡死
// 	//！注意Matrix里面SINAL_TERMINAL有可能就是free错误了………………
// 		free(lastNode);//!lastNode used after free哈哈哈哈
// 	}
// 	//	free(lastNode);
// 	//	free(head);
// }
//~~ //**----------------------------main.c-----------------------------------------------------
//~~ int main(void) {
//~~ 	int n, num;
//~~ 	scanf("%d", &n);
//~~ 	struct Node* head = NULL;
//~~ 	while (n--)
//~~ 	{
//~~ 		scanf("%d", &num);
//~~ 		insert(&head, num);
//~~ 	}
//~~ 	print_linklist(head);
//~~ 	delete_linklist(head);
//~~ 	main();
//~~ }
//~~**---------------------------------------------------------------------------------

//**PT 2023-12-29 17:48
//**About:ClassTest2
// #include<stdio.h>
// int main(void)
// {
// 	int M = 0, N = 0, cock = 0, hen = 0, chickTimes = 0;
// 	char hasAnswer = 0;
// 	scanf("%d %d", &M, &N);
// 	for (cock = M / 5;cock > -1; cock--)
// 		for (hen = M / 3;hen > -1;hen--)
// 			for (chickTimes = M;chickTimes > -1;chickTimes--)
// 			{
// 				if ((cock + hen + 3 * chickTimes == N) && (5 * cock + 3 * hen + chickTimes == M))
// 				{
// 					printf("%d %d %d\n", cock, hen, chickTimes * 3);
// 					hasAnswer = 1;
// 				}
// 			}
// 	if (!hasAnswer)printf("no answer");
// 	return 0;
// }

/*Author: Woisol
/*abc: */