#include <stdio.h>

int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	for (int i = 0; i < 5; i++) {
		*(p + i) = *(p + i) + 2;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}