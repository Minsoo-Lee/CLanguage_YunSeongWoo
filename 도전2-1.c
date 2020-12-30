#include <stdio.h>

int main(void) {
	int arr[10];
	printf("총 10개의 숫자 입력: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}
	printf("\n짝수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	return 0;
}