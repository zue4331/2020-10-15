#include <stdio.h>

int a;

int main(void) {
	while (1) {

		printf("�п�J�@��ơG\n");
		scanf_s("%d", &a);
		if (a % 2 == 0 || a == 0) printf("���Ƭ�����\n");
		if (a % 2 != 0) printf("���Ƭ��_��\n");

	}
}