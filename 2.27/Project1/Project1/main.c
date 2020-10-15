#include <stdio.h>

int main(void) {
	for (int i = 1; i <= 6; i++) {
		for (int k = i; k <= 5; k++) {
			printf(" ");
		}	
		for (int j = 1; j < 2 * (i - 1) ; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}