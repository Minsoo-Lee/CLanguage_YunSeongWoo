#include <stdio.h>

int main(void) {
	int n;
	char str[100];
	scanf("%s", str);

	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0') {
			n = i;
			break;
		}
	}
	printf("±æÀÌ: %d", n);
	return 0;
}