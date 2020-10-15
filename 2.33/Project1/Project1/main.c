#include <stdio.h>

int KM, KMPL, DPL, PAR, PAS, cost;


int main(void) {
	printf("請輸入今天的總里程數(KM, 小數點請無條件進位)：\n");
	printf("請輸入日油價：\n");
	printf("請輸入交通工具之油耗(公里/公升)\n");
	printf("請輸入今日停車費及過路費(請用空白鍵區分)\n");
	scanf_s("%d %d %d %d %d", &KM, &DPL, &KMPL, &PAR, &PAS);

	cost = ((KM / KMPL) * DPL) + PAS + PAR;
	printf("今日開車花費為：%d元\n", cost);
}