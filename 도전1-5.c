#include <stdio.h>

int main(void) {
	int n = 0, i = 1, j, count;

	while (n < 10) {
		count = 0;
		for (j = 1; j <= i; j++) {
			if (i % j == 0) 
				count++;
		}
		if (count == 2) {
			printf("%d ", i);
			n++;
		}
		i++;
	}
	return 0;
}