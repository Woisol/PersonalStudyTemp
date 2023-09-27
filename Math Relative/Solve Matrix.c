// 09-22 P! 求解矩阵
#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

// unsigned short ROWS = 3, COLUMNS = 4;
int main(void);
void interchange(double a[ROWS][COLUMNS], unsigned short line1, unsigned short line2)
{
	if (line1 == line2)
	{
		printf("Cant switch two same lines!\n");
		main();
		// 注意在这里应用main的话也要在前面先声明…………
		// 而且会有返回值！
	}
	int tempLine[3];
	tempLine[0] = a[line1][0];
	tempLine[1] = a[line1][1];
	tempLine[2] = a[line1][2];
	tempLine[3] = a[line1][3];
	a[line1][0] = a[line2][0];
	a[line1][1] = a[line2][1];
	a[line1][2] = a[line2][2];
	a[line1][3] = a[line2][3];
	a[line2][0] = tempLine[0];
	a[line2][1] = tempLine[1];
	a[line2][2] = tempLine[2];
	a[line2][3] = tempLine[3];
}
void scaling(double a[ROWS][COLUMNS], unsigned short row, double scale)
{
	a[row][0] *= scale;
	a[row][1] *= scale;
	a[row][2] *= scale;
	a[row][3] *= scale;
}

void adding(double a[ROWS][COLUMNS], unsigned short targetRow, unsigned short addingRow)
{
	if (targetRow == addingRow)
	{
		printf("Cant add two same rows!\n");
		main();
	}
	a[targetRow][0] += a[addingRow][0];
	a[targetRow][1] += a[addingRow][1];
	a[targetRow][2] += a[addingRow][2];
	a[targetRow][3] += a[addingRow][3];
}
void replacement(double a[ROWS][COLUMNS], unsigned short targetRow, double scale1, unsigned short addingRow, double scale2)
// 都和你说啦注意不要一股脑地就写int啦！还有改东西觉得全篇一起改……
{
	scaling(a, targetRow, scale1);
	scaling(a, addingRow, scale2);
	adding(a, targetRow, addingRow);
	scaling(a, addingRow, 1 / scale2); // 艹注意你这里是会破坏掉原来的数据的啊！记得还原！
									   // 用已有数组不要再int或者[]啦！！！
}

void getMatrix(double a[ROWS][COLUMNS])
{
	for (int row = 0; row < ROWS; row++)
	{
		scanf("%lf %lf %lf %lf", &a[row][0], &a[row][1], &a[row][2], &a[row][3]);
		// 注意数组元素依然是需要&的！和数组名区分！！！
		// 艹注意%f是float，%lf是double！一定要区分or全错！！！
	}

	// for (int row = 0, column = 0; row < ROWS && column < COLUMNS; row++)
	// {
	// 	scanf("%f", &a[row][column]);
	// 	if (row == ROWS - 1)
	// 	{
	// 		row = 0;
	// 		column++;
	// 	}
	// }
	// for (int t = 0, row = 0; row < ROWS; t < COLUMNS)
	// {
	// 	a[row][t] = getchar();
	// 	getchar();
	// 	// 常见易错：getchar会读取回车……
	// 	if (t >= COLUMNS - 1)
	// 	{
	// 		t = 0;
	// 		row++;
	// 		printf("\n");
	// 		continue;
	// 	}
	// }
}

void reduceRow(double a[ROWS][COLUMNS], unsigned short row, unsigned short column, unsigned short addingRow)
{
	replacement(a, row, a[addingRow][column], addingRow, -a[row][column]);
}

int main(void)
{
	double a[ROWS][COLUMNS];
	// double a[ROWS][COLUMNS] = {
	// 	{1, 2, 1, 4},
	// 	{1, 1, 2, 4},
	// 	{2, 1, 4, 7},
	// };
	// 所以数组整体赋值只能在初始化的时候？？？

	// double x1 = 0, x2 = 0, x3 = 0;
	// 艹注意C的二维数组是a[]而没有a[,]…………
	printf("Type into the %d*%d matrix:\n", ROWS, COLUMNS);
	// 常量也是可以在printf里面的

	getMatrix(a);
	reduceRow(a, ROWS - 1, 0, 0);
	reduceRow(a, ROWS - 2, 0, 0);
	reduceRow(a, ROWS - 1, 1, 1); // 1  艹这里思路错误了，应该使用r2消！
	scaling(a, ROWS - 1, 1 / a[ROWS - 1][COLUMNS - 2]);
	scaling(a, ROWS - 2, 1 / a[ROWS - 2][COLUMNS - 3]);
	scaling(a, ROWS - 3, 1 / a[ROWS - 3][COLUMNS - 4]);
	// 艹差点就出问题，一定注意定义时和使用时是不一样的！

	replacement(a, ROWS - 2, 1, ROWS - 1, -a[ROWS - 2][COLUMNS - 2]);
	replacement(a, ROWS - 3, 1, ROWS - 2, -a[ROWS - 3][COLUMNS - 3]);
	replacement(a, ROWS - 3, 1, ROWS - 1, -a[ROWS - 3][COLUMNS - 4]);

	// x1 = a[ROWS - 3][COLUMNS]; x2 = a[ROWS - 2][COLUMNS];x3 = a[ROWS - 1][COLUMNS];
	printf("x1 = %.4f\nx2 = %.4f\nx3 = %.4f\n", a[ROWS - 3][COLUMNS - 1], a[ROWS - 2][COLUMNS - 1], a[ROWS - 1][COLUMNS - 1]);

	printf("\n\n\n");
	getchar();
	main();

	return 0;
}