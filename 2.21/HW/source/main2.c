#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k,a;
	for (i = 0; i < 9; i++)
	{
		if (i == 0 || i == 8)
		{
			for (j = 0; j < 9; j++)
			{
				if (j == 3 || j == 4 || j == 5)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			
		}
		if (i == 1 || i == 7 )
		{
			for (k = 0; k < 9; k++)
			{
				if (k == 1 || k == 7 )
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6)
		{
			for  (a = 0; a < 9; a++)
			{
				if (a==0 || a==8)
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
