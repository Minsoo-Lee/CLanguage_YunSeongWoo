#include <stdio.h>

int main(void) {
	int n, i=0, sum=0, x;
	printf("�Է��� ������ ���� : ");
	scanf("%d", &n);

	while (i < n) {
		printf("���� �Է�: ");
		scanf("%d", &x);
		sum += x;
		i++;
	}
	printf("�Է��� ���: %lf", (float)sum / x);
	return 0;
}
