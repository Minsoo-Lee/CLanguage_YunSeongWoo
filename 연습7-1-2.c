#include <stdio.h>

int main(void) {
	int n, i=1;
	scanf("%d", &n);

	while (i <= n) {
		printf("%d\t", 3 * i);
		i++;
	}
	return 0;
}