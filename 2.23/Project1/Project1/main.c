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
		printf("�п�J�T�Ӿ��(�H�Ů�Ϥ�)�G\n");
		scanf_s("%d %d %d", &a[0], &a[1], &a[2]);
		for (int i = 1; i < 3; i++) {
			bb();
		}
		printf("�̤j���ƬO%d �̤p���ƬO%d\n", a[0], a[2]);
		return 0;
	//}
}