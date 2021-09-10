#include <stdio.h>

int main(void) {
	int n, i=0, sum=0, x;
	printf("입력할 정수의 갯수 : ");
	scanf("%d", &n);

	while (i < n) {
		printf("정수 입력: ");
		scanf("%d", &x);
		sum += x;
		i++;
	}
	printf("입력의 평균: %lf", (float)sum / x);
	return 0;
}
