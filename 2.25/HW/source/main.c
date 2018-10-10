#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	printf("Chen Tseng Hao\n");

	for (int i =1 ; i <=9 ; i++)
	{
		if (i == 1 || i==9)
		{
			for (int j = 1; j <= 9; j++)
			{
				if (j == 1 || j == 2 || j==3)
				{
					printf(" ");
				}
				else
				{
					printf("c");
				}
			}
		}
		if (i==2 || i==8)
		{
			printf(" c");
		}
		if (i == 3 || i == 4 || i == 5 || i == 6 || i == 7)
		{
			printf("c");
		}
		printf("\n");
	}
	printf("\n");
	for (int k = 1; k <= 9; k++)
	{
		if (k == 1)
		{
			for (int a = 1; a <= 9; a++)
			{
				printf("t");
			}
		}
		else
		{
			printf("    t");
		}
		printf("\n");
	}
	printf("\n");
	for (int b = 1; b <= 9; b++)
	{
		if (b == 5)
		{
			for (int c = 1; c <= 9; c++)
			{
				printf("h");
			}
		}
		else
		{
			printf("h       h");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}