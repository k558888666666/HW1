#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	printf("number  square  cube\n");



	for (int i = 0; i <= 10; i++)
	{
		if (i==0 || i==1 || i==2 || i == 3  )
		{
			printf("%d       %d       %d\n", i, (i*i), (i*i*i));
		}
		if (i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9)
		{
			printf("%d       %d      %d\n", i, (i*i), (i*i*i));
		}
		if (i==10)
		{
			printf("%d      %d     %d\n", i, (i*i), (i*i*i));
		}
	}
	
	system("pause");
	return 0;
}