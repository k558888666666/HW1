#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	printf("��J�Y�_��\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n-i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= 2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}


	system("pause");
	return 0;
}