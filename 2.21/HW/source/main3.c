#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k,a,b;

	for ( i = 0; i < 9; i++)
	{
		if (i == 0)
		{
			for ( k = 0; k < 5; k++)
			{
				if (k==2)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		if (i == 1)
		{
			for ( j = 0; j < 5; j++)
			{
				if (j == 1 || j == 2 || j == 3)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		if (i == 2)
		{
			for ( a = 0; a < 5; a++)
			{
				printf("*");
			}
		}
		if (i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8)
		{
			for (b = 0; b < 5; b++)
			{
				if (b == 2)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}