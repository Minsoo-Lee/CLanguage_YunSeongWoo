#include <stdio.h>

int mul(int a, int b);

int main(void) {
	int a, b, i=0;

	while(1) {
		printf("�� ���� ���� �Է�: ");
		scanf("%d %d", &a, &b);

		if ((a == 0) && (b == 0)) {
			printf("�� %d�� �����Ͽ����ϴ�.\n", i);
			break;
		}
		else {
			printf("���� ���: %d\n", mul(a, b));
			i++;
		}
	}
	return 0;
}

int mul(int a, int b) {
	int res;
	res = a * b;
	return res;
}