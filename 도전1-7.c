#include <stdio.h>

int main(void) {
	int k=0, n, x=1;

	printf("��� n�Է�: ");
	scanf("%d", &n);

	while (x <= n) {
		x *= 2;
		k++;
	}
	printf("������ �����ϴ� k: %d", k-1);

	return 0;
}