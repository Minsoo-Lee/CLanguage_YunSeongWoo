#include <stdio.h>

int main(void) {
	int arr[9], n;
	scanf("%d", &n);

	for (int i = 0; i < 9; i++)
		arr[i] = n * (i+1);
	for (int i = 1; i < 8; i += 2)
		printf("%d ", arr[i]);

	return 0;
}