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

// PT 关于char[]末尾不包括'/0'的问题
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

// // PT 各种进制转化
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

// // PT 判断整数位数
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

//关于控制%d输出位数
// #include<stdio.h>
// int main(void)
// {
// 	int a = 1;
// 	printf("%%2d  = %2d\n%%02d = %02d\n%%.2d = %.2d\n%%-2d = %-2dother words", a, a, a, a);
// 	return 0;
// }


//关于%f、%lf、%.2f？
// #include<stdio.h>
// int main(void)
// {
// 	double a = 1.00001;
// 	printf("%%f = %f\n%%lf = %lf\n%%.5f == %.5f", a, a, a);
// 	return 0;
//az结果居然都没有错？所以是只在scanf时会有问题吗？
// }

//关于inline函数传递参数的测试
// #include<stdio.h>
// __forceinline void printNum(int a)
// {
// 	printf("%d\n", a++);
// }
// int main(void)
// {
// 	int a = 0;
// 	for (int t = 0; t < 10; t++)
// 	{
// 		printNum(a);
// 	}
// 	return 0;
// }

//2023-10-31 20:18
//Purpose:Snippet Test
// #include<stdio.h>
// int main(void)
// {
// 	//Simply a Test
// 	return 0;
// }

//PT 2023-10-31 20:42
//Purpose:Snippet Final Edition
// #include<stdio.h>
// int main(void)
// {
// 	//Simply a Test
// 	return 0;
// }

//PT 2023-10-31 20:43
//Purpose:printf的四舍五入方法？
// #include<stdio.h>
// int main(void)
// {
// 	printf("1.05:%.1f\n", 1.05);
// 	printf("1.15:%.1f\n", 1.15);
// 	printf("1.25:%.1f\n", 1.25);
// 	printf("1.35:%.1f\n", 1.35);
// 	printf("1.45:%.1f\n", 1.45);
// 	printf("1.55:%.1f\n", 1.55);
// 	printf("1.65:%.1f\n", 1.65);
// 	printf("1.75:%.1f\n", 1.75);
// 	printf("1.85:%.1f\n", 1.85);
// 	printf("1.95:%.1f\n", 1.95);
// 	printf("\n");
// 	printf("2.05:%.1f\n", 2.05);
// 	printf("2.15:%.1f\n", 2.15);
// 	printf("2.25:%.1f\n", 2.25);
// 	printf("2.35:%.1f\n", 2.35);
// 	printf("2.45:%.1f\n", 2.45);
// 	printf("2.55:%.1f\n", 2.55);
// 	printf("2.65:%.1f\n", 2.65);
// 	printf("2.75:%.1f\n", 2.75);
// 	printf("2.85:%.1f\n", 2.85);
// 	printf("2.95:%.1f\n", 2.95);
// 	return 0;
// }

//PT 2023-10-31 21:41
//Purpose:关于宽字符串？
// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
// 	char str[10] = strcat(strcat("abc", "def"), '\0');
// 	//查一下strcat！
// 	printf("%%s = %s\n%%S = %S", str, str);
// 	return 0;
// }


//PT 2023-11-03 13:10
//Purpose:Snippet V2.1
// #include<stdio.h>
// int main(void)
// {

// 	return 0;
// }


//##################################################################################
// BOF 2023 - 11 - 03
//None 2023-11-03 13:08
//Purpose:给qws的代码
// #include<stdio.h>
// int main(void)
// {
// 	int numStudent = 0;
// 	double averageGrade = 0.0;
// 	scanf("%d", &numStudent);
// 	int grade[numStudent];
// 	for (int t = 0; t < numStudent; t++)
// 	{
// 		scanf("%d", &grade[t]);
// 		averageGrade += (double)grade[t];
// 	}
// 	averageGrade /= numStudent;
// 	printf("%lf", averageGrade);
// 	return 0;
// }


//##################################################################################
//BOF 2023-11-03

//PT 2023-11-03 15:09
//Purpose:关于%hh
// #include<stdio.h>
// int main(void)
// {
// 	char t = 127;
// 	printf("%%hhd = %hhd\n%%d = %d", t, t);
// 	return 0;
// 	//az结果相同
// }

//PT 2023-11-03 15:19
//Purpose:关于修饰符空格标记？
// #include<stdio.h>
// int main(void)
// {
// 	printf("%%d =\t %d\n%% d =\t % d", 123, 123);
// 	return 0;
// }

//PT 2023-11-03 15:33
//Purpose:关于修饰符的0和#？
// #include<stdio.h>
// int main(void)
// {
// 	printf("%01f\n", 12.0);
// 	printf("%#0.1f\n", 12.00);//这后面的第二个0还是会被删掉
// 	printf("%#0.0f\n", 12.0);
// 	return 0;
// }

//CT 2023-11-03 16:23
//Purpose:剪刀石头布游戏
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
//EOF 2023-11-03 16:32

//PT 2023-11-03 17:04
//Purpose:课堂测试的一道题
// #include<stdio.h>
// int main(void)
// {
// 	for (int i = 0;i < 3; i++, i++)
// 		for (int j = 1;j < 3;j++);printf("*");
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
//BOF 2023-11-06
//PT 2023-11-06 15:26
//About:woq函数调用参数的顺序in vsc？！
// #include<stdio.h>
// void print(int a, int b, int c)
// {
// 	printf("%d %d %d\n", a, b, c);
// }
// int main(void)
// {
// 	int a = 0;
// 	printf("%d %d %d\n", a++, a++, a++);
// 	print(a++, a++, a++);
// 	return 0;
// 	//是的在gcc中函数参数调用是从右往左的
// }


//PT 2023-11-06 20:31
//About:孝天:反过来也是素数的反素数
// #include<stdio.h>
// #include<stdbool.h>
// #include<math.h>
// int intergerNum = 0;
// int switchNum(int originalNum)
// {
// 	int  ans = 0;
// 	// intergerNum = originalNum / 10 + 1;//艹sb

// 	for (;;intergerNum++)
// 	{
// 		if (originalNum / (int)pow(10, intergerNum) == 0) { break; }
// 	}

// 	for (int t = intergerNum;t > 0;t--)
// 	{
// 		ans += (int)(originalNum / (int)pow(10, intergerNum - t) % 10 * (int)pow(10, t - 1));// (int)pow(10, intergerNum - t + 1)
// 		//这里只有%需要前后都为int所以需要转化………………
// 		//回头看了X to 10才搞出来艹………………回头整理了你！！！
// 	}
// 	return ans;
// }
// bool isPrime(int a)
// {
// 	for (int t = 2; t < a / 2 + 1; t++)
// 	{
// 		if (a % t == 0) { return false; }
// 	}
// 	return true;
// }
// int main(void)
// {
// 	int originalNum = 5;
// 	// scanf("%d", &originalNum);
// 	for (int t = 0;t < 50;originalNum++)
// 	{
// 		if (isPrime(originalNum) && isPrime(switchNum(originalNum))) { printf("%d\n", originalNum); t++; }
// 	}
// 	printf("%d", originalNum);
// 	return 0;
// }


//##################################################################################
// //BOF 2023-11-07
// //PT 2023-11-07 13:26
// //About:关于宽字符
// //仍未解决
// #include<stdio.h>
// #include<wchar.h>//有了下面那个这个可以不用了
// #include<locale.h>
// int main(void)
// {
// 	char Char = '宽';
// 	char string[] = "宽字符";
// 	// printf("普通printf:\n%%c = %c\n%%s = %s\n\n", Char, string);
// 	//这边这样写只能在vsc控制台中正常显示，在windows terminal中就是乱码了

// 	setlocale(LC_ALL, "chs");
// 	//必不可少
// 	wchar_t wchar = L'宽';
// 	wchar_t wstring[] = L"宽字符";
// 	//注意加上这个L！
// 	wprintf(L"wprintf:%%c = %c\n%%s = %s\n", wchar, wstring);//%%c = %c
// 	//同样注意有L，似乎可以不用%lc用%c也可！字符串用的是%ls

// 	wchar_t u5bbd = 0xE5AEBD;
// 	wchar_t benery = 0b111001011010111010111101;
// 	//用int的话应该会出现之前那个堆栈的问题

// 	wprintf(L"\\u5bbd = %c\n0b1110 0101 1010 1110 1011 1101 = %c", 0xE5AEBD, 0b111001011010111010111101);
// 	//为什么实现不出来？为什么会溢出？
// 	getchar();
// 	//实现了的在windows terminal上已经正常输出中文了~
// 	return 0;
// }

//PT 2023-11-07 19:24
//About:关于printf和put和cputs
// #include<stdio.h>
// int main(void)
// {
// 	//算了没有必要了
// 	return 0;
// }

//PT 2023-11-07 19:32
//About:尝试用递归实现斐波那契数列？
//应该不可行，中间值不知道也没有规律只知道起始值
//艹看到文章提到能用了https://www.zhihu.com/question/20278387试一下！！！
//艹行了果然……中间规律不需要知道的！递归回去就行了！！！
// #include<stdio.h>
// int Hbonacci(int n)
// {
// 	if (n == 2 || n == 1) { return 1; }
// 	// if (n == 2) { return 2; }
// 	return (Hbonacci(n - 1) + Hbonacci(n - 2));
// }
// int main(void)
// {
// 	int n = 4;
// 	printf("Hbonacci[%d] = %d", n, Hbonacci(n));
// 	return 0;
// }

//PT 2023-11-07 20:45
//About:妈耶都没试过scanf的正则用法！
// #include<stdio.h>
// int main(void)
// {
// 	char char[30];
// 	int num = 0;

// 	scanf("%10[^a]", char);
// 	// scanf("%*[a-z]%d", &num);//可行的！你之前没注意转换类型一致……
// 	//注意这种是从头匹配配到不合条件了后面都不会再配了的！！！
// 	// sscanf();//az

// 	printf("%s\n", char);
// 	printf("%d\n", num);
// 	fflush(stdin);
// 	main();
// 	return 0;
// }

//##################################################################################
//BOF 2023-11-08
//PT 2023-11-08 12:47
//About:关于文件读写的测试
// #include<stdio.h>
// #include<windows.h>
// int main(void)
// {
// 	char content[20];
// 	FILE* localFile = NULL;//没错是个指针所以记得NULL！
// 	if ((localFile = fopen("localFile.txt", "a+")) == NULL) { perror("打开文件错误");return 1; }//注意用这个来输出错误！这些函数执行后都会设置全局变量errno的！//这边注意居然是先==再=……
// 	fputs("\"Test\":\"NextLine\"\n", localFile);//如何使用正则匹配并修改这里的""？……(?<=")""？
// 	//啊为什么写入以后就不能读取了？！是在于位置的问题吗？woq真是哈哈
// 	//加注意C中表示"是用\"而非""………………
// 	// system("pause");
// 	rewind(localFile);
// 	if (fgets(content, 20, localFile) == NULL) { perror("读取文件错误"); }
// 	//！！！发现啦！！！之前写入莫名其妙多的空格就是在这里艹如果在末尾写入那会新增空格！
// 	fclose(localFile);
// 	printf("%s", content);

// 	return 0;
// }


//PT 2023-11-08 19:34
//About:关于文件位置【划去】读取全部文件的做法
// #include<stdio.h>
// int main(void)
// {
// 	FILE* file = NULL;
// 	char character = 0;

// 	if ((file = fopen("D:/Code/Code-C/C Test/FilePosTest.txt", "r")) == NULL) { perror("找不到文件"); return 1; }
// 	while (1)
// 	{
// 		character = fgetc(file);
// 		if (feof(file)) { break; }
// 		//注意这里feof是检测FILE的指针！
// 		putchar(character);
// 		//注意putc是FILE的要输入FILE，和putchar区分！
// 		//md服了记事本输入内容后记得要保存啊！……怪不得一直读不出来
// 	}
// 	fclose(file);
// 	return 0;
// }

//PT 2023-11-08 19:52
//About:文件位置以及fscanf？
// #include<stdio.h>
// int main(void)
// {
// 	FILE* file = NULL;
// 	char character = 0;
// 	int pos = 0;

// 	// pos = getchar();//不要随便用getchar……这是数字……
// 	scanf("%d", &pos);
// 	if ((file = fopen("D:/Code/Code-C/C Test/FilePosTest.txt", "r")) == NULL) { perror("找不到文件"); }
// 	fseek(file, pos, SEEK_SET);
// 	// character = fgetc(file);
// 	fscanf(file, "%d", &character);
// 	//woq！！！其实已经得了的！！但是是中午所以才乱码的！！！1输出空2往后才输出乱码的时候你就该想到啦！！！
// 	if (feof(file)) { puts("无效位置"); }
// 	putchar(character);putchar('\n');//区分这两个哪个要加''！
// 	main();
// 	return 0;
// }

/*----------------------------打开文件次数-----------------------------------------------------*/

//PT 2023-11-08 13:42
//About:打开文件次数;)：测试&摸索
// #include<stdio.h>
// #include<time.h>
// #include<windows.h>
// int main(void)
// {
// 	int times = 6;
// 	int fPos = 0;
// 	//艹啊啊啊啊！！！我说为什么还是都只能输出1，回调main的时候time又设成1了哈哈哈………………
// 	//额不对啊不应该是扫描上去的嘛…………
// 	FILE* file = NULL;
// 	// fpos_t fPos = 0;//注意这两个的本质类型！

// 	if ((file = fopen("D:/Code/Code-C/C Test/OpenFileTime.txt", "a+")) == NULL) { perror("打开文件错误"); return 1; }
// 	//这里最好写绝对路径，写相对路径似乎没办法到下一个层级
// 	fseek(file, -2, SEEK_END);//!!!!!!!!!!!终于明白了啊啊啊啊啊啊啊！！！！这个是每次移动一个字节！所以注意读数字的话要2个！！！
// 	// fputc('*', file);//艹为什么这个就是file在后面………………
// 	// times = fgetc(file) - 8;//md不要随便用getc……
// 	// fPos = ftell(file);
// 	fscanf(file, "%d", &times);
// 	fseek(file, 0, SEEK_END);
// 	// fPos = ftell(file);
// 	fprintf(file, "\n%d", ++times);//记得写入的文件啊！！！//艹++times啊啊啊啊！！！//你打开了这个文件次。
// 	// fPos = ftell(file);
// 	fclose(file);

// 	system("pause");
// 	main();
// 	return 0;
// }

//PT 2023-11-08 20:40
//About:打开文件次数：V0.99
// #include<stdio.h>
// #include<windows.h>
// int main(void)
// {
// 	FILE* file = NULL;
// 	int times = 0;
// 	int test = 0;

// 	if ((file = fopen("D:/Code/Code-C/C Test/OpenFileTime.txt", "a+")) == NULL) { perror("无法打开文件"); return 1; }
// 	//woc哭晕了，刚好这里挡住了后面的参数……这里不小心漏了+了…………
// 	//所以如果前面写的一模一样的代码可行，请用vsc的选中看看到底一不一样……每个都要看！

// 	scanf("%d", &test);

// 	fseek(file, -test, SEEK_END);
// 	fscanf(file, "%d", &times);
//服了这个scanf必须要精确走到数字前才能读取……
// 	fseek(file, 0, SEEK_END);
// 	fprintf(file, "\n你一共打开了这个文件%d次", ++times);//
// 	fclose(file);
// 	// system("pause");
// 	main();
// 	return 0;
// 	//tmd这两段代码不是完全一样吗为什么下面这个就是不能成？？？
// }

//PT 2023-11-08 21:04
//About:打开文件次数：V0.999！……
// #include<stdio.h>
// #include<windows.h>
// int main(void)
// {
// 	FILE* file = NULL;
// 	int times;
// 	int test;

// 	if ((file = fopen("D:/Code/Code-C/C Test/Others/OpenFileTime.txt", "a+")) == NULL) { perror("无法打开文件"); return 1; }
// 	fseek(file, -35, SEEK_END);//但是为什么是4呢？//请注意在文件中中文占3个字节！UTF-8记得吗？！然后int是1个！
// 	fscanf(file, "你一共打开了这个文件%d次", &times);
// 	//不行即使是这样依然没办法应对变化的数字……
// 	//这样看来只能这样了……
// 	fseek(file, 0, SEEK_END);
// 	fprintf(file, "\n你一共打开了这个文件%d次", ++times);
// 	//麻了10循环……不搞了艹……
// 	fclose(file);
// 	// system("pause");
// 	main();
// 	return 0;
// }

//PT 2023-11-08 21:24
//About:打开文件次数：V1.0！！！！
//这次的思路是从前面计数到数字那里
//再想想这种其实如果能用字符串处理绝对不用这么麻烦。
//不过输了这么多遍对文件读写也熟悉多了吧艹
// #include<stdio.h>
// #include<windows.h>
// int main(void)
// {
// 	FILE* file = NULL;
// 	int times;
// 	int test;

// 	if ((file = fopen("D:/Code/Code-C/C Test/Others/OpenFileTime.txt", "a+")) == NULL) { perror("无法打开文件"); return 1; }
// 	fseek(file, 0, SEEK_END);
// 	while (1)
// 	{
// 		fseek(file, -3, SEEK_CUR);//注意你后面多了一个fgetc所以要是3啊！
// 		// test = ftell(file);
// 		// test = fgetc(file);
// 		if (fgetc(file) == '\n' || fgetc(file) == -1) { break; }
		//其实这里最好还是实际演算一下确定返回后究竟回到哪个位置……不过能跑就行：）
// 	}
// 	fseek(file, 30, SEEK_CUR);
// 	fscanf(file, "%d", &times);
// 	fseek(file, 0, SEEK_END);
// 	fprintf(file, "\n你一共打开了这个文件%d次", ++times);
// 	fclose(file);//注意这里如果不关闭输出无效！
// 	system("pause");
// 	main();
// 	return 0;
// }
//EOF 2023-11-08 21:53//woq搞了一个晚上啊啊啊啊！说好搞好人升的又搞不了了啊啊啊！！！
//##
//##----------------------------打开文件次数-----------------------------------------------------*/
//##
//##################################################################################
//**BOF 2023-11-09
//**PT 2023-11-09 09:15
//**About:time.h的使用：程序运行时间
// #include<stdio.h>
// #include<time.h>
// int main(void)
// {
// 	clock_t startClock = 0, endClock = 0;
// 	int test = 100, way = 0, n = 0;;
// 	startClock = clock();
// 	for (int t = 0;t < test;t++)
// 	{
// 		switch (way)
// 		{
// 		case 1:printf("1");break;//0.004s
// 		case 2: putchar('1');break;//0.003s单个字符显然putchar更快
// 		case 3:n++;//0s
// 		}
// 	}
// 	endClock = clock();
// 	printf("%.10lf", (double(endClock - startClock) / CLOCKS_PER_SEC));
// 	return 0;
// }

//**PT 2023-11-09 09:27
//**About:time.h：取当前时间
// #include<stdio.h>
// #include<time.h>
// int main(void)
// {
// 	time_t timer = time(NULL);
// 	struct tm* timeStruct = localtime(&timer);//&time(NULL)//就是不给在一行里面搞定必须要一个变量对吧艹……
// 	printf("%d-%d-%d %02d:%02d:%02d",//2023-10-9 09:39:01
// 		timeStruct->tm_year + 1900, timeStruct->tm_mon, timeStruct->tm_mday, timeStruct->tm_hour, timeStruct->tm_min, timeStruct->tm_sec);
// 	return 0;
// }

//** PT 2023-11-09 09:39
//## About:打开文件次数：V2.0：新增时间记录
// #include<stdio.h>
// #include<windows.h>
// #include<time.h>
// int main(void)
// {
// 	FILE* file = NULL;
// 	int times;
// 	int test;
// 	time_t timer = 0;
// 	struct tm* nowTime;

// 	if ((file = fopen("D:/Code/Code-C/C Test/Others/OpenFileTime.txt", "a+")) == NULL) { perror("无法打开文件"); return 1; }

// 	timer = time(NULL);
// 	nowTime = localtime(&timer);

// 	fseek(file, 0, SEEK_END);
// 	while (1)
// 	{
// 		fseek(file, -3, SEEK_CUR);
// 		if (fgetc(file) == '\n' || fgetc(file) == -1) { break; }
// 	}
// 	fseek(file, 50, SEEK_CUR);//Nice这次熟悉以后直接就有50了哈哈哈~一步到位都不用调试哈哈
// 	fscanf(file, "%d", &times);
// 	fseek(file, 0, SEEK_END);
// 	fprintf(file, "\n%d-%02d-%02d %02d:%02d:%02d 你一共打开了这个文件%d次",
// 		nowTime->tm_year + 1900, nowTime->tm_mon, nowTime->tm_mday, nowTime->tm_hour, nowTime->tm_min, nowTime->tm_sec, ++times);
// 	fclose(file);
// 	system("pause");
// 	main();
// 	return 0;
// }

//**PT 2023-11-09 09:53
//##About:暴力解析ini文
// #include<stdio.h>
// #include<string.h>
// char overWatch = 0;

// char temp = 0;
// int year = 0, month = 0, day = 0, hour = 0, min = 0, sec = 0;

// inline void ReadSkip(FILE* file)
// {
// 	do
// 	{
// 		temp = fgetc(file);

// 	} while (temp != '\n');//这里究竟应该把判断放在哪呢？好像前后都一样？
// 	//注意末尾的while要用;!!!
// }
// // inline void ReadObj(FILE* file)//C传递数组可以用指针也可以用[]但是注意不会检查边界！
// // {
// // 	// char objectReaded[10];
// // 	fscanf(file, "%[^=]", &objectReaded);
// // 	// return objectReaded;//这里明显重复不必要定义了，直接修改全局变量即可
// // }
// // inline void ReadNum(FILE* file,char * numReaded)
// // {
// // 	fscanf(file, "%d", &numReaded);
// // }
// inline char ReadINI(FILE* file)
// {
// 	char ObjReaded[10];
// 	while (1)
// 	{
// 		temp = fgetc(file);
// 		switch (temp)
// 		{
// 		case'[':
// 		case'#':ReadSkip(file);break;
// 		case'\n':continue;
// 		case EOF:break;
// 		default:fseek(file, -1, SEEK_CUR);//艹开始忘记了这步少读了一个字母……
// 			fscanf(file, "%[^=]", &ObjReaded);overWatch = fgetc(file);
// 			if (strcmp(ObjReaded, "year")) { fscanf(file, "%d", &year); }//			//switch(ReadObj())//这里如果想用switch可以考虑用枚举这里不改了
// 			//艹都说了不要随便用char……出一堆问题艹这里要改%c而且2023超范围了……
// 			//！！！艹字符比较不能直接==……后面有一堆乱字符……
// 			else if (strcmp(ObjReaded, "month")) { fscanf(file, "%d", &month); }
// 			else if (strcmp(ObjReaded, "day")) { fscanf(file, "%d", &day); }
// 			else if (strcmp(ObjReaded, "hour")) { fscanf(file, "%d", &hour); }
// 			else if (strcmp(ObjReaded, "min")) { fscanf(file, "%d", &min); }
// 			else if (strcmp(ObjReaded, "sec")) { fscanf(file, "%d", &sec); }
// 		}
// 	}
// }
// int main(void)
// {
// 	FILE* file = NULL;

// 	if ((file = fopen("D:/Code/Code-C/C Test/Others/Config.ini", "a+")) == NULL) { perror("无法打开文件"); return 1; }
// 	//啊为什么w+会重新写啊？
// 	ReadINI(file);
// 	fclose(file);
// 	printf("%04d-%02d-%02d %02d:%02d:%02d", year, month, day, hour, min, sec);
// 	return 0;
// }

//##################################################################################
//BOF 2023-11-10
//PT 2023-11-10 14:04
//About:关于字符比较
// #include<stdio.h>
// #include<assert.h>
// int main(void)
// {
// 	char str1[10] = "ab";
// 	char str2[10] = "ac";

// 	assert(str1 == str2);
// 	assert(*str1 == *str2);
// 	//始终无法直接比较string，毕竟其本身只是个地址。*也只能比较开头字符。
// 	//所以只能是用strcmp了
// 	return 0;
// }


//PT 2023-11-10 15:09
//About:多文件的全局变量？
// #include<stdio.h>
// int GolbelVariable;
// int main(void)
// {
// 	printf("%d", GolbelVariable);
//并不行，可能是要一个项目里面吧
// 	return 0;
// }

//PT 2023-11-10 15:17
//About:scanf的*测试
// #include<stdio.h>
// int main(void)
// {
// 	char string[20];
// 	int num = 0;
// 	sscanf("abc = 123", "%s = %d", string, &num);
// 	//注意这里的%s是把数字也当成字符串了……
// 	//实际使用可以考虑用空格
// 	printf("%s\n%d", string, num);
// 	return 0;
// }

//##################################################################################
//BOF 2023-11-11
//PT 2023-11-11 08:48
//##About:暴力解析ini文件：改进scanf&增加写入功能！（NOT）
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #include<windows.h>
// char  dV1 = 50, dV2 = 2;
// int oW = 0;//oW不要轻易设char，unsigned的话只有127……

// void setLineBegin(FILE* file, int dV2)
// {
// 	// clock_t originalTime = 0, difTime = 0.0;
// 	// originalTime = clock();
// 	// if (dV2 == 2) { goto Way2; }
// 	// while (1)
// 	// {
// 	// 	oW = ftell(file);
// 	// 	fseek(file, -2, SEEK_CUR);
// 	// 	if (fgetc(file) == '\n') { break; }
// 	// 	//在想有没有可能改进一下……
// 	// }
// 	// goto Count;
// 	// exit();//这个函数必须要有stdlib.h才能用！

// 	//新方法
// 	//其实考虑到fseek可能也是一个个退回去的吧，那这样效率其实差别不大？
// Way2:
// 	fseek(file, -10, SEEK_CUR);
// 	for (int t = 0;t < 11;t++)
// 	{
// 		oW = ftell(file);
// 		if (fgetc(file) == '\n') { fseek(file, -3, SEEK_CUR); break; }
// 	}
// 	while (1)
// 	{
// 		fseek(file, -20, SEEK_CUR);
// 		for (int t = 0;t < 10; t++)
// 		{
// 			oW = ftell(file);
// 			if (fgetc(file) == '\n') { goto Count; }//！！！注意break不能通过多用跳出嵌套循环！！！！！！！
// 		}
// 	}
// Count:
// 	// // difTime = clock() - originalTime;// / CLOCKS_PER_SEC / 1000
// 	// //艹注意调试是会影响clock的………………
// 	// printf("%ld\n", difTime);
// 	return;//!!!void也是可以return的！
// }
// void nextLine(FILE* file)
// {
// 	while (1)
// 	{
// 		if (fgetc(file) == '\n') { break; }
// 	}
// }
// void readIni(FILE* file, int* data)
// {
// 	char tempChar = 0;
// 	while (1)
// 	{
// 		oW = tempChar = fgetc(file);
// 		switch (tempChar)
// 		{
// 		case '[':
// 		case '#':nextLine(file);
// 		case '\n':continue;
// 		default:
// 			fscanf(file, "%*s = %d", data);return;//break;//艹这个break只是出了switch……
// 		}
// 	}
// }
// void rewriteIni(FILE* file, int data)
// {
// 	char tempChar = 0;
// 	// fseek(file, 220, SEEK_SET);
// 	// fprintf(file, "Rewrite");//这样又得？？？？然后而且居然没有覆盖下一行！
// 	while (1)
// 	{
// 		tempChar = fgetc(file);
// 		switch (tempChar)
// 		{
// 		case '[':
// 		case '#':nextLine(file);
// 		case '\n':oW = ftell(file);continue;
// 		case ' ':if (fgetc(file) == '=' && fgetc(file) == ' ')
// 		{
// 			fseek(file, oW = ftell(file), SEEK_SET);
// 			fprintf(file, "%d", data);
// 			// oW = ftell(file);
// 			// fprintf(file, "Rewrite");
// 			// fwrite(&data, sizeof(int), sizeof(data) / sizeof(int), file);
// 			//为什么就是写不进去……………………测试都行的………………
// 			// fflush(file);//而且为什么加了这个后面没办法再调用这个函数了？
// 			goto Exit;
// 		}
// 				// default:
// 					// return;//break;//艹这个break只是出了switch……
// 		// }break;
// 		}
// 	}
// Exit://为什么？？？为什么只能用标签退出？？？
// 	//悟了，依旧是switch的问题，在这里面continue只是跳出switch，但是接下来就break了……
// 	fflush(file);//这个并不能即时写入……
// 	//！！！！但是这个是有用的！！！没有这个就莫名其妙把前面的复制下来了！！！
// 	//妈耶机缘巧合哈哈不想细究了/汗
// 	// fclose(file);
// 	return;
// 	//真的，能跑就行，刚刚又想改不用goto，然后发现改了不对再改回来就是各种{}的bug了…………
// }
// // void newWriteIni(FILE* file, int data)
// int main(void)
// {
// 	FILE* file = NULL;
// 	char tempChar = 0;
// 	int year, month, day, hour, min, sec;
// 	struct tm* nowTime;
// 	// int* inputData = NULL;

// 	if ((file = fopen("D:/Code/Code-C/C Test/Others/Config.ini", "r+")) == NULL) { perror("无法打开文件"); return 1; }

// 	// //测试一下两种方法的速度
// 	// fseek(file, dV1, SEEK_SET);
// 	// setLineBegin(file, dV2);

// 	readIni(file, &year);
// 	readIni(file, &month);
// 	readIni(file, &day);
// 	readIni(file, &hour);
// 	readIni(file, &min);
// 	readIni(file, &sec);
// 	//啊忘记啦！！使用实参其实很容易的！！！
// 	printf("Last time opened:\n%d-%02d-%02d %02d:%02d:%02d\n", year, month, day, hour, min, sec);

// 	time_t timer = time(NULL);
// 	nowTime = localtime(&timer);//喵的烦死了艹//而且注意这个函数返回的是tm*!!!!
// 	year = nowTime->tm_year + 1900;month = nowTime->tm_mon + 1;day = nowTime->tm_mday;hour = nowTime->tm_hour;min = nowTime->tm_min;sec = nowTime->tm_sec;
// 	//艹之前那次怎么是用的*结构体啊?区分这两个调用的语法!
// 	// fseek(file, 0, SEEK_SET);
// 	rewind(file);
// 	rewriteIni(file, year);//是喔，就算写入了，数字不同估计它也会把后面的改掉的吧！
// 	rewriteIni(file, month);
// 	rewriteIni(file, day);
// 	rewriteIni(file, hour);
// 	rewriteIni(file, min);
// 	rewriteIni(file, sec);
// 	// fprintf(file, "RewriteTest");//这个又行？？？？？？？？

// 	// fseek(file, 0, SEEK_SET);//注意读完一次记得指针回头啊!!!
// 	rewind(file);//你明明可以用更简单的
// 	readIni(file, &year);
// 	readIni(file, &month);
// 	readIni(file, &day);
// 	readIni(file, &hour);
// 	readIni(file, &min);
// 	readIni(file, &sec);
// 	printf("For now:\n%d-%02d-%02d %02d:%02d:%02d\n", year, month, day, hour, min, sec);

// 	fclose(file);
// 	// system("pause");
// 	// main();
// 	return 0;
// }
//EOF 2023-11-11 11:43 艹
//EOF 2023-11-11 13:58//成了！！！！成了家人们！！！居然要先一个fseek才能写入！！！


//PT 2023-11-11 11:45
//About:关于文件覆写的问题,是函数的问题吗？
// #include<stdio.h>
// #include<string.h>
// static int times = 0;
// void write(FILE* file, char* content)
// {
// 	fseek(file, 0, SEEK_SET);
// 	if (times == 0)
// 	{
// 		times = 1;
// 		fprintf(file, "%s", content);
// 		// fwrite(content, sizeof(char), sizeof(content) / sizeof(char), file);
// 	}
// 	else
// 	{
// 		times = 0;
// 		// content = "RewriteFileTest";
// 		//注意不能直接给字符串赋值!要用strcpy!!!
// 		strcpy(content, "RewriteFileTest\n");
// 		fprintf(file, "%s", content);
// 		// fwrite(content, sizeof(char), sizeof(content) / sizeof(char), file);

// 	}

// }
// int main(void)
// {
// 	FILE* file = NULL;
// 	char content[20] = "Woisol\n";

// 	if ((file = fopen("D:/Code/Code-C/C Test/Others/RewriteFileTest.txt", "r+")) == NULL) { perror("无法打开文件"); }
// 	//OK果然出问题最好还是提取出来专门debug一下……
// 	//a+和r+的区别在于前者是“add”只能补加不能修改原有的！
// 	//w+的话就是全部删掉重新写过了
// 	write(file, content);
// 	fclose(file);
// 	main();
// 	return 0;
// }

//##################################################################################
//PT 2023-11-12 18:05
//About:传递函数？？？
// #include<stdio.h>
// int getData(void)
// {
// 	return 1;
// }
// int add(int(*getData)())
// {
// 	int a = getData();
// 	return ++a;
// }
// int main(void)
// {
// 	printf("%d", add(getData));
// 	return 0;
// }
//woq居然支持得这么好，好像都没听那个教程讲过呀艹

//##################################################################################
//PT 2023-11-16 19:42
//About:GPT:欧几里得算法求两数最大公约数
// #include"NoBlackWindows.c"
// //
// int gcd(int a, int b)
// {
// 	if (b == 0)
// 		return 0;
// 	return gcd(b, a % b);
// }
// void newMain(void)
// {

// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }

//PT 2023-11-16 20:01
//About:将有理数变为分数
// #include"NoBlackWindows.c"
// int gcd(int* a, int* b)
// {
// 	if (*b == 0)return (*a);
// 	int res = (*a) % (*b);//!“*”的运算顺序这么后的吗？…………
// 	return gcd(b, &res);//!注意因为是指针所以不能&(*a % *b)………………
// }
// void floatToFraction(double* p, int* q)
// {
// 	*q = 1;
// 	while ((*p) != (int)(*p))//!判断是不是小数的方法极其简单！
// 	{
// 		*q *= 10;
// 		*p *= 10;//!服了用指针极其麻烦…………一定要注意不要漏了*！
// 	}
// }
// void newMain(void)
// {
// 	double p = 0;
// 	int	q = 0, intp = 0, maxgcd = 0;;//!服了还是不注意类型………………
// 	nscanf("%lf", &p);
// 	floatToFraction(&p, &q);
// 	intp = (int)p;
// 	maxgcd = gcd(&intp, &q);
// 	p /= maxgcd;
// 	q /= maxgcd;
// 	nprintf("%2f", p);
// 	nprintf("%2d", q);//!这个程序框架还是有问题……似乎无法换行输出？……
// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }
//td sprintf无法换行输出要调整一下…………

//PT 2023-11-19 14:18
//About:再次测试输出stdin
// #include<stdio.h>
// int main(void)
// {
// 	// char input = 0;
// 	// fputs("abc", stdin);
// 	// input = getc(stdin);
// 	// printf("%c", input);
// 	//!多次测试无效了不要再试了
// 	return 0;
// }

//PT 2023-11-19 14:27
//About:GPT的重定向来避免键盘输入
//!可行，在同一目录下输入"C Personal Test.exe" < "Input Test.txt"可以实现输入
// #include<stdio.h>
// int main(void)
// {
// 	int input = 0;
// 	scanf("%d", &input);
// 	printf("%d", input);
// 	return 0;
// }

//PT 2023-11-19 14:43
//About:尝试利用空格sscanf实现读取字符串每个字符
//!艹并不可行…………
// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
// 	char string[10] = "abcdefghi";
// 	char tmpc = 0, curc = 0;//!第一次使用tmp缩写

// 	for (int t = 0;t < strlen(string) + 1;t++)//这里还是建议用的是strlen + 1而不是sizeof因为可能中途停止后面的即使不是空也会包括
// 	{
// 		sscanf(string, "%c", &tmpc);
// 		switch (tmpc)
// 		{
// 		case 'a': curc = 'a';string[t] = 32;break;
// 		case 'b': curc = 'b';string[t] = 32;break;
// 		case 'c': curc = 'c';string[t] = 32;break;
// 		case 'd': curc = 'd';string[t] = 32;break;
// 		case 'e': curc = 'e';string[t] = 32;break;
// 		case 'f': curc = 'f';string[t] = 32;break;
// 		case 'g': curc = 'g';string[t] = 32;break;
// 		case 'h': curc = 'h';string[t] = 32;break;
// 		case 'i': curc = 'i';string[t] = 32;break;
// 		case 'j': curc = 'j';string[t] = 32;break;
// 		}
// 	}
// 	return 0;
// }

//PT 2023-11-19 17:07
//About:关于二维数组的初始化形式
// #include<stdio.h>
// void printRecArray33(int arr[][3])
// {
// 	for (int n = 0;n < 3;n++)
// 	{
// 		for (int m = 0;m < 3;m++)
// 		{
// 			printf("%d ", arr[n][m]);
// 		}
// 		printf("\n");
// 	}
// 	printf("\n");
// }
// int main(void)
// {
// 	int arr1[][3] = { {1,2,3},{4,5,6},{7,8,9} };
// 	//!注意这样虽然编译器知道是行，但是依然不能省略第一维！
// 	int arr2[][3] = { {1},{2},{3} };
// 	//!这种可以实现对每行的控制，每行第一个被赋值其它则是0

// 	printRecArray33(arr1);printRecArray33(arr2);
// 	return 0;
// }

//PT 2023-11-19 17:40
//!About:const与数组
// #include<stdio.h>
// void constArrTest(int arr[const])
// //!不通过，似乎不存在这样的用法
// {
// 	arr[0] = 0;
// }
// int main(void)
// {
// 	const int size = 2;
// 	arrConstSize[size] = "0";
// 	//!报错，常量不能作为数组大小！“尽管是一个const变量，但它不是一个编译时常量”

// 	int arr[2] = { 1,2 };
// 	const int constarr[2] = { 1,2 };
// 	// constarr[0] = 0;
// 	constArrTest(arr);
// 	constArrTest(constarr);

// 	return 0;
// }

//##################################################################################
//BOF 2023-11-20
//**PT 2023-11-20 08:51
//About:关于abs和fabs所在的库
// #include<stdio.h>
// #include<math.h>
// int main(void)
// {
// 	abs(-1.5);
// 	fabs(-2.25);
// 	return 0;
// }

//**PT 2023-11-20 08:55
//About:关于C中的auto
// #include<stdio.h>
// int main(void)
// {
// 	auto string = "abc";
// 	auto n = 0;
// 	printf("%s%d", string, n);
// 	//可以是可以但是为什么vsc不能自动补全？
// 	//额不过果然还是因为用了g++吧在控制台用gcc是会报错的
// 	//网查也确实只有C++11才有…………
// 	return 0;
// }

//##################################################################################
//BOF 2023-11-24
//**PT 2023-11-24 14:54
//About:关于数组的另一种定义方式
// #include<stdio.h>
// int main(void)
// {
// 	char* testChar = "Can this run? \0 Guest it can.";
// 	//!警告ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
// 	//!同时这个\0是可以正常使用的
// 	printf("%s", testChar);
// 	return 0;
// }

//**PT 2023-12-01 16:13
//About:关于指针的加减
// #include<stdio.h>
// int main(void)
// {
// 	char arr[2] = { 'a','b' };
// 	char* parr1 = &arr[0], * parr2 = &arr[1];
// 	printf("*parr1 = %c\t*parr2 = %c\n%%s of *parr1 = Error\nparr2 - parr1 = %d", *parr1, *parr2, parr2 - parr1);
// 	//!可以证实加减就是得到元素个数的差值
// 	return 0;
// }

//**PT 2023-12-01 16:22
//About:关于2[a]…………
// #include<stdio.h>
// int main(void)
// {
// 	char a[5] = "Test";
// 	printf("0[a] = %c", 0[a]);
// 	//艹真行
// 	return 0;
// }

//**PT 2023-12-01 16:23
//About:关于二维数组的行引用
// #include<stdio.h>
// int main(void)
// {
// 	int arr[2][2] = { 1,2,3,4 };
// 	int* pRow0 = arr[0];
// 	// int* pRow1[2] = { arr,arr + 1 };//!虽然是行指针但是不能这样初始化……报错将int[2]变成int
// 	int* pRow2[2] = { arr[0],arr[1] };//!所以这个a[]本身就是一个行指针！！
// 	//!啊但是为什么arr[0] & [1]只是一个元素？
// 	printf("pRow2[0][1] = %d", pRow2[0][1]);
// 	//!咳咳可以的这样以后还是得到了一个行
// 	return 0;
// }

//##################################################################################
//BOF 2023-12-04
//**PT 2023-12-04 20:23
//**About:文件夹名修改后调整
//az只要修改了vsc的配置就行
// #include"NoBlackWindows.c"
// void newMain(void)
// {
// 	nprintf("%d", 1);
// }
// int main(void) { egeNoBlackWindows(newMain);return 0; }
//##################################################################################
//**PT 2023-12-08 15:30
//**About:逐个对比的一种方法
// #include<stdio.h>
// int main(void)
// {
// 	char* limitsChar = "abc";//!注意要用这种用法这里不能是数组不然无法使用++
// 	char input = 0;

// 	scanf("%c", &input);
// 	for (;*limitsChar;limitsChar++)
// 	{
// 		if (input == *limitsChar) { printf("Exist"); return 0; }
// 	}
// 	printf("Not Exist");
// 	return 0;
// }

//**PT 2023-12-08 15:58
//**About:printx?
//!az并没有这种东西
// #include<stdio.h>
// #include<stdlib.h>
// int main(void)
// {
// 	int num = 0;

// 	return 0;
// }

//**PT 2023-12-08 21:17
//**About:关于二维数组和指针的问题
// #include<stdio.h>
// int main(void)
// {
// 	int arr[2][2] = { 1,2,3,4 };
// 	int** parr = arr;//!请注意毕竟还是二维要用**
// 	//!艹二维数组指针似乎没有那么简单赋值
// 	//!NB：要么用malloc要么必须(*p)[3]…………
// 	//!同时(*p)[3]的时候p++是访问的下一行（~本质）
// 	//!好像突然更理解arr[i][j]的本质了…………
// 	printf("%d", *(*parr + 3));
// 	return 0;
// }

//**PT 2023-12-09 10:51
//**About:关于指针函数的使用
//!这里就是基本使用方法了……
// #include<stdio.h>
// int testFunc(int x) { return ++x; }
// int main(void)
// {
// 	int (*pfunc)(int) = &testFunc;//!'int (*)(int)' to 'int (*)()'
// 	pfunc(1);
// 	return 0;
// }

//##################################################################################
//**PT 2023-12-10 14:22
//**About:关于三目运算符……
// #include<stdio.h>
// int main(void)
// {
// 	int a = 1, b = 2;
//! 	a > b ? : a = b;
//! 	// a < b ? a = b : ;//!az上一条可以这一条就不行！
// 	return 0;
// }

//**PT 2023-12-10 14:35
//**About:宏定义函数相关
// #include<stdio.h>
// #define abs(x) {\
// if (x < 0)return -x;\
// else return x;\
// }

// int main(void)
// {
// 	printf("%d", abs(-2));
// 	return 0;
// }
//**EOF 2023-12-11 16:00：艹服了不干了烦死

//##################################################################################
//**PT 2023-12-15 20:52
//**About:关于C中用字符串表示格式化字符？？？
// #include<stdio.h>
// int main(void)
// {
// 	char string[] = "So it truly EXISTS!";//！艹真行…………比较这个函数传进去的东西本质也是字符串呀哈哈哈
// 	char FormatString[] = "%s";
// 	printf(FormatString, string);
// 	return 0;
// }

//**PT 2023-12-15 20:57
//**About:一个选择题中出现的麻烦递归
// #include<stdio.h>
// void fun(char* s) {
// 	char t;
// 	if (*s)
// 	{
// 		t = *s++;
// 		fun(s);
// 	}
// 	if (t != '\0')
// 		putchar(t);//！是的……利用好递归的本质，递到最后在返回来！所以是最后一个fun先putchar再逐渐返回！
// }
// int main() {
// 	char* a = "1234";
// 	fun(a);
// 	printf("\n");
// 	return 0;
// }

//**PT 2023-12-15 21:06
//**About:选择题中出现的问题……
// #include<stdio.h>
// #include<string.h>
// int main() {
// 	char* p1, * p2, str[50] = "ABCDEFG";
// 	p1 = "abcd";
// 	p2 = "efgh";
// 	strcpy(str + 1, p2 + 1);//！请注意后面的结束符也是一起复制过来的！！
// 	strcpy(str + 3, p1 + 3);
// 	printf("%s", str);
// }