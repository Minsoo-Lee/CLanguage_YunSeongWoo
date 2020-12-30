#include <stdio.h>

int main(void) {
	int n;
	printf("10진수 입력: ");
	scanf("%d", &n);
	int arr[8], copy[8];
	int index = 0;
	for (int i = 0; i < 8; i++) {
		if ((float)n / 2 >= 1) {
			arr[i] = n % 2;
			n = n / 2;
			printf("%d ", n);
		}
		else if ((float)n/2>=0.5){
			arr[i] = 1;
			n = n / 2;
		}
		else
			arr[i] = 0;
	}
	printf("\n");
	for (int i = 0; i < 8; i++) {
		copy[i] = arr[7 - i];
		printf("%d", copy[i]);
	}
	return 0;
}