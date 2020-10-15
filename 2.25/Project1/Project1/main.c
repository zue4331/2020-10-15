#include <stdio.h>

int main(void){
	for (int i = 0; i < 16; i++) {
		switch (i) {
		case 0: 
			printf("PPPPPPPPP\n");
		case 1: case 2: case 3: 
			printf("    P   P\n");
		case 4: 
			printf("     P P\n");
		case 5:
			printf("\n");
		case 6: 
			printf("  JJ\n");
		case 7: 
			printf(" J\n");
		case 8: 
			printf("J\n");
		case 9: 
			printf(" J\n");
		case 10: 
			printf("  JJJJJJJ\n");
		case 11:
			printf("\n");
		case 12: 
			printf("DDDDDDDDD\n");
		case 13: case 14: 
			printf("D       D\n");
		case 15: 
			printf(" D     D \n");
		case 16: 
			printf("  DDDDD  \n");
		}
		break;
	}
	return 0;
}