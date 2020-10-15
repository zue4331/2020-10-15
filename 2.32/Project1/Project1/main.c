#include <stdio.h>

double w, h, BMI;


int main(void) {
	printf("請輸入您的體重(Kg)：\n");
	scanf_s("%lf", &w);
	printf("請輸入您的身高(CM)：\n");
	scanf_s("%lf", &h);

	BMI = w / ((h / 100) * (h / 100));
	printf("your BMI is %lf\n", BMI);
	if (BMI < 18.5) {
		printf("underweight！\n");
	}
	else if (BMI <= 24.9) {
		printf("Normal\n");
	}
	else if (BMI <= 29.9) {
		printf("Overweight！\n");
	}
	else printf("Obese");
	
	
	return 0;
}