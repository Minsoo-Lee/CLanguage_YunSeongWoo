#include <stdio.h>

void DesSort(int* a);

int main(void) {
	int arr[7];
	printf("���� �Է�: ");
	for (int i = 0; i < 7; i++)
		scanf("%d", &arr[i]);

	DesSort(arr);

	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	return 0;
}

void DesSort(int* a) {
	int min, tmp;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 6; j++) {
			if (*(a+i) > *(a+j)) {
				tmp = *(a+j);
				*(a+j) = *(a+i);
				*(a+i) = tmp;
			}
		}
	}
}