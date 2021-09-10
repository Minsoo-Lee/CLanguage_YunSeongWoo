#include <stdio.h>

int main(void) {
	int arr[10], n = 0, m = 9;
	int real[10];
	printf("10개의 숫자 입력: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 1) {
			real[n] = arr[i];
			n++;
		}
		else {
			real[m] = arr[i];
			m--;
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", real[i]);
	return 0;
}