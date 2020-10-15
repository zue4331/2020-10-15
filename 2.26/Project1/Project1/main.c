#include <stdio.h>

int a, b;

int main(void) {
	printf("請輸入兩個整數a、b(以空格區分)：\n");
	scanf_s("%d %d", &a, &b);

	if (a % b == 0) printf("a 是 b 的倍數\n");
	if (a % b != 0) printf("a 不是 b 的倍數");

	return 0;
}