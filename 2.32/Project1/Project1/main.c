#include <stdio.h>

double w, h, BMI;


int main(void) {
	printf("�п�J�z���魫(Kg)�G\n");
	scanf_s("%lf", &w);
	printf("�п�J�z������(CM)�G\n");
	scanf_s("%lf", &h);

	BMI = w / ((h / 100) * (h / 100));
	printf("your BMI is %lf\n", BMI);
	if (BMI < 18.5) {
		printf("underweight�I\n");
	}
	else if (BMI <= 24.9) {
		printf("Normal\n");
	}
	else if (BMI <= 29.9) {
		printf("Overweight�I\n");
	}
	else printf("Obese");
	
	
	return 0;
}