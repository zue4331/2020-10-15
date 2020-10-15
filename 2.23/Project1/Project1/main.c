#include <stdio.h>

int s;
int a[2];

int bb() {
	if (a[0] < a[1]) {
		s = a[0];
		a[0] = a[1];
		a[1] = s;
	}
	if (a[1] < a[2]) {
		s = a[1];
		a[1] = a[2];
		a[2] = s;
	}
}
int main(void) {
	//while (1) {
		printf("叫块俱计(跋だ)\n");
		scanf_s("%d %d %d", &a[0], &a[1], &a[2]);
		for (int i = 1; i < 3; i++) {
			bb();
		}
		printf("程计琌%d 程计琌%d\n", a[0], a[2]);
		return 0;
	//}
}