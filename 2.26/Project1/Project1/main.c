#include <stdio.h>

int a, b;

int main(void) {
	printf("�п�J��Ӿ��a�Bb(�H�Ů�Ϥ�)�G\n");
	scanf_s("%d %d", &a, &b);

	if (a % b == 0) printf("a �O b ������\n");
	if (a % b != 0) printf("a ���O b ������");

	return 0;
}