#include <stdio.h>

void rotate(int(*a)[4], int(*b)[4]);

int main(void) {
	int a[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int b[4][4];

	rotate(a, b);
	rotate(b, a);
	rotate(a, b);

	return 0;
}

void rotate(int(*a)[4], int(*b)[4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			b[i][j] = a[3-j][i];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	printf("\n");
}