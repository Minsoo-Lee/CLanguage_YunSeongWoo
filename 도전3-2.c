#include <stdio.h>

void garo(int(*pa)[100], int a, int b);
void sero(int(*pa)[100], int a, int b);
void print(int(*pa)[100], int m);

int main(void) {
	int n, k = 1, arr[100][100], x, y, m;
	printf("숫자를 입력하시오: ");
	scanf("%d", &n);
	m = n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[0][i]);
	}
	printf("yes!\n");
	n--; 
	x = 0;
	y = n;
	
	while (n > 0) {
		sero(arr, &k, &x, y, n);
		garo(arr, &k, x, &y, n);
		n--;
	}
	print(arr, m);
	return 0;
}

void sero(int(*pa)[100], int* k, int* x, int y, int n) {
	int c;
	for (int i = 0; i < n; i++) {
		if ((*k) == 1) {
			scanf("%d", &pa[(*x) + i + 1][y]);
			c = i + 1;
		}
		else {
			scanf("%d", &pa[(*x) - i - 1][y]);
			c = -i - 1;
		}
	}
	*x += c;
	*k *= -1;
}

void garo(int(*pa)[100], int* k, int x, int* y, int n) {
	int c;
	for (int i = 0; i < n; i++) {
		if ((*k) == 1) {
			scanf("%d", &pa[x][(*y) + i + 1]);
			c = i+1;
		}
		else {
			scanf("%d", &pa[x][(*y) - i - 1]);
			c = -i-1;
		}
	}
	*y += c;
}

void print(int(*pa)[100], int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++)
			printf("%d\t", pa[i][j]);
		printf("\n");
	}
}