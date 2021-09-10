#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[100];
	int len, count=0;
	scanf("%s", arr);
	printf("%s\n", arr);
	
	len = strlen(arr);
	printf("%d\n", len);
	for (int i = 0; i < len / 2; i++) {
		if (arr[i] == arr[len - i - 1])
			count++;
	}
	printf("%d\n", count);
	if (count == len / 2)
		printf("회문입니다.\n");
	else
		printf("회문이 아닙니다.\n");
}