#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double km;
	int gas;
	double gaskm;
	int park;
	int toll;
	int money;

	printf("一整天的總里程數?\n");
	scanf_s("%lf", &km);
	printf("汽油一公升/加侖多少錢?\n");
	scanf_s("%d", &gas);
	printf("平均一公升/加侖能行駛多少公里?\n");
	scanf_s("%lf", &gaskm);
	printf("一天的停車費?\n");
	scanf_s("%d", &park);
	printf("一天的過路費?\n");
	scanf_s("%d", &toll);
	money = km / gaskm * gas + park + toll + 0.5;

	printf("Your cost per day for driving to work is %d \n", money);
	system("pause");
	return 0;
}