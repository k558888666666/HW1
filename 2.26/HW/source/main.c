#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x, y;
	int m;
	printf("輸入兩個值，判斷他們的倍數關係\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	m = x / y;
	if (x % y == 0)
	{
		printf("%d是%d的%d倍\n", x, y, m);
	}
	else
	{
		printf("不是倍數關係\n");
	}
	


	system("pause");
	return 0;
}