#include <stdio.h>

int KM, KMPL, DPL, PAR, PAS, cost;


int main(void) {
	printf("�п�J���Ѫ��`���{��(KM, �p���I�еL����i��)�G\n");
	printf("�п�J��o���G\n");
	printf("�п�J��q�u�㤧�o��(����/����)\n");
	printf("�п�J���鰱���O�ιL���O(�ХΪť���Ϥ�)\n");
	scanf_s("%d %d %d %d %d", &KM, &DPL, &KMPL, &PAR, &PAS);

	cost = ((KM / KMPL) * DPL) + PAS + PAR;
	printf("����}����O���G%d��\n", cost);
}