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

	printf("�@��Ѫ��`���{��?\n");
	scanf_s("%lf", &km);
	printf("�T�o�@����/�[�ڦh�ֿ�?\n");
	scanf_s("%d", &gas);
	printf("�����@����/�[�گ��p�h�֤���?\n");
	scanf_s("%lf", &gaskm);
	printf("�@�Ѫ������O?\n");
	scanf_s("%d", &park);
	printf("�@�Ѫ��L���O?\n");
	scanf_s("%d", &toll);
	money = km / gaskm * gas + park + toll + 0.5;

	printf("Your cost per day for driving to work is %d \n", money);
	system("pause");
	return 0;
}