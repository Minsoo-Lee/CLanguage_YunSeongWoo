#include <stdio.h>

int two(int n) {
	int res=1;
	if (n == 0) {
		return res;
	}
	else {
		res = 2 * two(n - 1);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	printf("%d", two(n));

	return 0;
}