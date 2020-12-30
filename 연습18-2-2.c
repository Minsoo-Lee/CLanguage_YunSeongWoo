#include <stdio.h>

void fct1(int* a, int(*b)[4]);

int main(void) {
	int arr1[3];
	int arr2[2][4];
	fct1(arr1,arr2);
	return 0;
}

void fct1(int* a, int(*b)[4]) {
	for (int i = 0; i < 3; i++) {
		scanf("%d", a+i);
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", b[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", *(a + i));
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}