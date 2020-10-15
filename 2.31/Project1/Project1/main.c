#include <stdio.h>
int n, s, c;

int main(void) {
	printf("number square cude\n");
	for (int i = 0; i <= 10; i++) {
		n = i; s = i * i; c = i * s;
		switch (i) {
		case 0:case 1:case 2:case 3:
			printf("%d      %d      %d\n", n, s, c);
			break;
		case 4:case 5:case 6:case 7:case 8:case 9:
			printf("%d      %d     %d\n", n, s, c);
			break;
		case 10:
			printf("%d     %d    %d\n", n, s, c);
			break;
		}
	}
	return 0;
}