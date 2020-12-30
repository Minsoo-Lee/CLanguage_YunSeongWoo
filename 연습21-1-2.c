#include <stdio.h>
#include <string.h>

int conv(char c) {
	return c - 48;
}

int main(void) {
	char string[50];
	int len;
	int sum = 0;
	gets(string);
	len = strlen(string);
	
	
	for (int i = 0; i < len; i++) {
		if ((string[i] >= 48) && (string[i] <= 57)) {
			sum += conv(string[i]);
		}
		printf("\n");
	}

	printf("%d\n", sum);
}