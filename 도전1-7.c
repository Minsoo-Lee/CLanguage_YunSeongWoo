#include <stdio.h>

int main(void) {
	int k=0, n, x=1;

	printf("상수 n입력: ");
	scanf("%d", &n);

	while (x <= n) {
		x *= 2;
		k++;
	}
	printf("공식을 만족하는 k: %d", k-1);

	return 0;
}