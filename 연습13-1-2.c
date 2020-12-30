#include <stdio.h>

int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	int tmp;
	for (int i = 0; i < 2; i++) {
		tmp = *(p + i);
		*(p + i) = *(p + (4 - i));
		*(p + (4 - i)) = tmp;
	}
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return 0;
}