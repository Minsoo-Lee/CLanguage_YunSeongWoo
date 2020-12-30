#include <stdio.h>

void p(int(*pa)[100], int* n);

int main(void) {
	int a[100][100];
	int x = 5;

	p(a, &x);
	return 0;
}

void p(int(*pa)[100], int* n) {
	scanf("%d", &pa[0][n]);
}