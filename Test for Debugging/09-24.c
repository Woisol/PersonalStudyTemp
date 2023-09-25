#include <stdio.h>

void switchArray(int a[2])
{
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}

int main(void)
{
	int a[2] = {1, 2};
	printf("a's original:%d,%d\n", a[0], a[1]);
	switchArray(a);
	printf("a switched:%d,%d\n", a[0], a[1]);
	return 0;
}