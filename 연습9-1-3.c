#include <stdio.h>

void fibo(int n);

int main(void) {
	int n, res;
	scanf("%d", &n);
	
	fibo(n);
	return 0;
}

void fibo(int n) {
	int a = 0, b = 1, res, i;
	if (n == 1)
		printf("%d ", a);
	else if (n == 2)
		printf("%d %d", a, b);
	else if (n > 2) {
		printf("%d %d ", a, b);
		for (i = 0; i < n - 2; i++) {
			res = a + b;
			printf("%d ", res);
			a = b;
			b = res;
		}
	}
}