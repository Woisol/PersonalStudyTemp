// 09-14
// 溢出测试
#include <stdio.h>
int main(void)
{
	short int t1 = 65536;
	short int t2 = -65536;
	short int t3 = 65535;
	short int t4 = -65535;
	short int t5 = 32766;
	short int t6 = -32769;
	printf("%d %d %d\n", t1, t1 + 1, t1 + 2);
	printf("%d %d %d\n", t2, t2 + 1, t2 + 2);
	printf("%d %d %d\n", t3, t3 + 1, t3 + 2);
	printf("%d %d %d\n", t4, t4 + 1, t4 + 2);
	printf("%d %d %d\n", t5, t5 + 1, t5 + 2);
	printf("%d %d %d\n", t6, t6 + 1, t6 + 2);
	return 0;
	// //还行，gcc还是会报错的，不过输出确实从头开始了
	// //另：short int才是10000（16）
	// //所以为什么负数再+1是1？？？
	// //哦哦，如果定义以及溢出了就已经是0了/笑

	// //-了1才发现，65536不是最大值，而是已经溢出超过负数一直到0了/笑
	// 算了直接遍历
	// int t = 65500; // 笑死这个初始量，运行了好久都搞不出来哈哈
	// while (1)
	// {
	// 	if (t > ++t)
	// 	{
	// 		printf("%d~%d", t++, t);
	// 		return 0;
	// 	}
	// }
}