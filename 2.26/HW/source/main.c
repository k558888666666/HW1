#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x, y;
	int m;
	printf("��J��ӭȡA�P�_�L�̪��������Y\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	m = x / y;
	if (x % y == 0)
	{
		printf("%d�O%d��%d��\n", x, y, m);
	}
	else
	{
		printf("���O�������Y\n");
	}
	


	system("pause");
	return 0;
}