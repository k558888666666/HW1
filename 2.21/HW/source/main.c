#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k;
	for (i = 0; i < 9; i++)
	{
		if (i == 0 || i == 8)
		{
			for (k = 0; k < 9; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (j = 0; j < 9; j++)
			{
				if (j == 0 || j == 8)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}


