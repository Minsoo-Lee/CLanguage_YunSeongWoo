#include <stdio.h>

void FtoC(void);
void CtoF(void);

int main(void) {
	char choice;

	printf("ÀÔ·Â°ª ¼±ÅÃ: ");
	scanf("%c", &choice);
	switch (choice) {
	case 'C':
		CtoF();
		break;
	case 'F':
		FtoC();
		break;
	}
	return 0;	
}

void FtoC(void) {
	double F, C;
	printf("È­¾¾ ÀÔ·Â: ");
	scanf("%lf", &F);
	C = (F - 32) / 1.8;
	printf("º¯È¯µÈ ¼·¾¾: %.2lf\n", C);
}

void CtoF(void) {
	double F, C;
	printf("¼·¾¾ ÀÔ·Â: ");
	scanf("%lf", &C);
	F = 1.8 * C + 32;
	printf("º¯È¯µÈ È­¾¾: %.2lf\n", F);
}