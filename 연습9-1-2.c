#include <stdio.h>

void FtoC(void);
void CtoF(void);

int main(void) {
	char choice;

	printf("�Է°� ����: ");
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
	printf("ȭ�� �Է�: ");
	scanf("%lf", &F);
	C = (F - 32) / 1.8;
	printf("��ȯ�� ����: %.2lf\n", C);
}

void CtoF(void) {
	double F, C;
	printf("���� �Է�: ");
	scanf("%lf", &C);
	F = 1.8 * C + 32;
	printf("��ȯ�� ȭ��: %.2lf\n", F);
}