#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	double BMI;
	double w;
	double h;
	printf("身高(cm)\n");
	scanf_s("%lf", &h);

	printf("體重(kg)\n");
	scanf_s("%lf", &w);

	
	h = h / 100;
	BMI = w / (h*h);
	printf("Your BMI value = %2.2f\n\n\n", BMI);

	printf("BMI value\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");

	system("pause");
	return 0;
}