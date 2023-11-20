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

//PT 2023-11-17 22:40
//!About:Test2:螺旋打印
// #include"NoBlackWindows.c"
// void newMain(void)
// {

// 	int m = 3, n = 1;
// 	int matrix[m][n] = { 1, 2, 3 };//, 4, 5, 6, 7, 8, 9 , 10, 11, 12 ,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30
	// int* arr = matrix;//注意数组指针的声明欸不能这样声明吗?...
	// for (int t = 0; t < m * n;t++)
	// {
	// 	*(matrix + t) = t + 1;//欸C不能二维数组用一维读取的嘛,只能用指针,欸不能写入吗?
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
	//EOF 2023-11-19 10:00:00+
	/*----------------------------Rewrite-11-19-----------------------------------------------------*/
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
	/*----------------------------GPT-----------------------------------------------------*/
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
	/*----------------------------GPT-修改-----------------------------------------------------*/
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
