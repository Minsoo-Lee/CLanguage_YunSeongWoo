#include <stdio.h>

int main(void) {
	int a, b;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}