#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	printf("��J�@�ӭȡA�P�_�O�_�Ʃΰ���\n");
	scanf_s("%d", &n);

	if (n % 2 == 0)
	{
		printf("it's even\n");
	}
	if (n % 2 == 1)
	{
		printf("it's odd\n");
	}

	system("pause");
	return 0;



}