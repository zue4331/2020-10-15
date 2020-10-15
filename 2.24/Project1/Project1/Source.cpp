#include <stdio.h>

int a;

int main(void) {
	while (1) {

		printf("叫块俱计\n");
		scanf_s("%d", &a);
		if (a % 2 == 0 || a == 0) printf("计案计\n");
		if (a % 2 != 0) printf("计计\n");

	}
}