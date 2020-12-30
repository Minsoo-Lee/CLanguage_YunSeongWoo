#include <stdio.h>

int main(void) {
	int n = 2;
	while (1) {
		if (n % 2 == 1) {
			n++;
			continue;
		}
		else
			for (int i = 1; i <= n; i++) {
				printf("%d * %d = %d\n", n, i, n * i);
			}
		if (n > 7)
			break;
		printf("\n");
		n++;
	}
	return 0;
}