#include <stdio.h>

int main(void) {
	int a, b;

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			if (11 * (a + b) == 99)
				printf("%d%d + %d%d = %d\n", a, b, b, a, 99);
		}
	}
	return 0;
}