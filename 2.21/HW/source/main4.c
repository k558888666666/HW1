#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k,a,b,c;
	for ( i = 0; i < 9; i++)
	{
		if (i == 0 || i == 8)
		{
			for ( k = 0; k < 9; k++)
			{
				if (k == 4)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		if (i == 1 || i == 7)
		{
			for ( j = 0; j < 9; j++)

			{
				if (j == 3 || j == 5)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		if (i == 2 || i == 6)
		{
			for ( a = 0; a < 9; a++)
			{
				if (a == 2 || a == 6)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		if (i == 3 || i == 5)
		{
			for (b = 0; b < 9; b++)
			{
				if (b == 1 || b == 7)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		if (i == 4)
		{
			for (c = 0; c < 9; c++)
			{
				if (c == 0 || c == 8)
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
