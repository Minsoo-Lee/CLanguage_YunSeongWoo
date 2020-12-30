#include <stdio.h>

int main(void) {
	int n, count=0, i=1, sum=0;

	while (count < 5) {
		printf("0 보다 큰 수를 입력(%d번째): ", i);
		scanf("%d", &n);
		i++;
		while (n <= 0) {
			printf("0 보다 큰 수를 다시 입력(%d번째): ", i);
			scanf("%d", &n);
			i++;
		}
		sum += n;
		count++;
	}
	printf("입력된 값의 총 합: %d\n", sum);
	return 0;
}