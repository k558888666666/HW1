#include <stdio.h>
#include <stdlib.h>
int main(void)
{


	int x[5], G;
	printf("��J�T�ӼơA�ڥi�H�i�D�A���̪����Y\n");
	
	//printf("%d%d%d", a, b, c);
	
	for (int k = 1; k <= 3; k++)
	{
		
		scanf_s("%d", &x[k]);
		
	}
	for (int i = 1; i <=3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			if (x[i]>x[j])
			{
				G = x[i];
				x[i] = x[j];
				x[j] = G;
			}
		}
	}
	
	printf("The largest one is %d\n", x[1]);
	printf("The lowest one is %d\n", x[3]);
	 

	system("pause");
	return 0;


	

}