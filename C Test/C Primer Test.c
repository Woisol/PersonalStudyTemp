// // 09-14
// // 溢出测试
// #include <stdio.h>
// int main(void)
// {
// 	short int t1 = 65536;
// 	short int t2 = -65536;
// 	short int t3 = 65535;
// 	short int t4 = -65535;
// 	short int t5 = 32766;
// 	short int t6 = -32769;
// 	printf("%d %d %d\n", t1, t1 + 1, t1 + 2);
// 	printf("%d %d %d\n", t2, t2 + 1, t2 + 2);
// 	printf("%d %d %d\n", t3, t3 + 1, t3 + 2);
// 	printf("%d %d %d\n", t4, t4 + 1, t4 + 2);
// 	printf("%d %d %d\n", t5, t5 + 1, t5 + 2);
// 	printf("%d %d %d\n", t6, t6 + 1, t6 + 2);
// 	return 0;
// 	// //还行，gcc还是会报错的，不过输出确实从头开始了
// 	// //另：short int才是10000（16）
// 	// //所以为什么负数再+1是1？？？
// 	// //哦哦，如果定义以及溢出了就已经是0了/笑

// 	// //-了1才发现，65536不是最大值，而是已经溢出超过负数一直到0了/笑
// 	// 算了直接遍历
// 	// int t = 65500; // 笑死这个初始量，运行了好久都搞不出来哈哈
// 	// while (1)
// 	// {
// 	// 	if (t > ++t)
// 	// 	{
// 	// 		printf("%d~%d", t++, t);
// 	// 		return 0;
// 	// 	}
// 	// }
// }

//10-23
//一些细节
// #include<stdio.h>
// int main(void)
// {
// 	int a = 0b11, b;
// 	a = b = 0b110;
// 	printf("%D\n%D\n%D", a, b);
// 	return 0;
// }

//关于printf的自动类型转化
// #include<stdio.h>
// #include<math.h>
// int main(void)
// {
// 	int a = pow(2, 31);
// 	printf("%d\n%d\n%d", a, a + 1, a * 2);
// 	return 0;
// }

//10-24
//关于其它的一些转义符
// #include<stdio.h>
// #include<windows.h>
// int main(void)
// {
// 	printf("\\a:\a\n\n");
// 	system("pause");
// 	printf("\\b:\b\n\n");
// 	system("pause");
// 	printf("\\f:\f\n\n");
// 	system("pause");
// 	printf("\\r:\r\n\n");
// 	system("pause");
// 	printf("\\v:\v\n\n");
// 	return 0;
// }

//关于\b\f\r\v\ddd的测试
// #include<stdio.h>
// int main(void)
// {
// 	// printf("12356");
// 	// printf("\b\b");
// 	// printf("4");

// 	// printf("\f");

// 	// printf("789456");
// 	// printf("\r");
// 	// printf("123");

// 	// printf("\n\n");
// 	printf("123456789123456789\t\v");
// 	printf("101011100");

// 	// char a = '\0101';
// 	// printf("\010");//是的没错你个*开始的时候你用的就是""……现在如果用的是''的话是会报错的……不知道为什么用不了
// 	// printf("\0111");
// 	// printf("\na:%d\n", a);
// 	// return 0;
// }

//关于本环境中char是signed还是unsigned
// #include<stdio.h>
// int main(void)
// {
// 	char a = 0b1001;
// 	char b = -7;
// 	printf("0b1001 = %d\n-7 = %d", a, b);
// 	return 0;
// }

//10-27
//关于%e %a
// #include<stdio.h>
// int main(void)
// {
// 	double a = 32000;
// 	printf("%e %a", a, a);
// 	return 0;
// }

//关于上下溢
// #include<stdio.h>
// int main(void)
// {
// 	// float a = 0x.5p-9;
// 	// printf("%e\n%e", a, a / 2);
// 	unsigned char a = 65534;
// 	printf("%e\n%e", a, a * 100);
// 	return 0;
// }

//关于舍入错误
// #include<stdio.h>
// int main(void)
// {
// 	float a = 2.0e6 + 1.0;
// 	float b = a - 2.0e6;
// 	printf("a = %.10f\na + 1 - a = %.10f", a, b);
// 	return 0;
// }

//关于复数
// #include<stdio.h>
// #include<complex.h>
// int main(void)
// {
// 	double _Complex a = 2.0 + 1.0 * I;
// 	//注意依然需要 * ！
// 	double _Complex b = 1.0 + 2.0 * I;
// 	double _Complex ans = a + b;

// 	// complex double{ 1.0, 0.5 };

// 	printf("a + b = %.0f + %.0fi", creal(a + b), cimag(a + b));
// 	//是的使用creal等读取实部虚部
// 	return 0;
// }

//关于pirntf中类型大小转义符%zd
// #include<stdio.h>
// int main(void)
// {
// 	// printf("int is %d size.\nint is %zd size.", sizeof(int), sizeof(int));
// 	//emm这个%zd的效果和%d一样嘛
// 	int a = 10;
// 	printf("%zd\n%zd", sizeof(int), a);
// 	return 0;
// }

//关于\b的一个好玩方法
// #include<stdio.h>
// int main(void)
// {
// 	printf("$__________\b\b\b\b\b\b\b\b\b\b");
// 	getchar();
// 	return 0;
// }

//10-30
//关于printf的刷新
// #include<stdio.h>
// int main(void)
// {
// 	printf("1");
// 	printf("2");
// 	printf("3\n");
// 	printf("4");
// 	scanf("");
// 	printf("5");
// 	fflush(stdin);
// 	printf("6");
// 	getc(stdin);
// 	printf("7");
// 	return 0;
// }

//关于32位int
//3.11 Test
// #include<stdio.h>
// int main(void)
// {
// 	// __int32
// 	int input = 0;
// 	scanf("%d", &input);
// 	printf("%c", input);
// 	return 0;
// }

