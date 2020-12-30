#include <stdio.h>

int main(void) {
	int n, i=1;

	scanf("%d", &n);

	while (i <= 9) {
		printf("%d * %d = %d\n", n, 10 - i, n * (10 - i));
		i++;
	}
	return 0;
}