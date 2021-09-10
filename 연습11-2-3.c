#include <stdio.h>

int main(void) {
	char str[100], max;
	int len;

	scanf("%s", str);
	max = str[0];
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0') {
			len = i;
			break;
		}
	}
	for (int i = 0; i < len; i++) {
		if (max < str[i])
			max = str[i];
	}
	printf("%c", max);
	return 0;
}