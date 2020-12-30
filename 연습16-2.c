#include <stdio.h>

int main(void) {
	int a[2][4] = { { 1,2,3,4 }, { 5,6,7,8 } }, b[4][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			b[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}