#include <stdio.h>

int main(void) {
	char arr[26];

	for (int i = 0; i < 26; i++) {
		arr[i] = 65 + i;
		printf("%c ", arr[i]);
	}
}