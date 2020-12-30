#include <stdio.h>

int main(void) {
	char str[100], copy[100];
	int n;

	scanf("%s", str);

	for (int i = 0; i < 100; i++) 
		if (str[i] == '\0') {
			n = i;
			break;
		}
	for (int i = 0; i < n; i++) {
		copy[i] = str[n - i - 1];
		printf("%c", copy[i]);
	}
	return 0;
}