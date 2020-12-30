#include <stdio.h>	

int main(void) {
	char ch;
	printf("문자 입력: ");
	ch = getchar();

	if ((ch >= 'A') && (ch <= 'Z'))
		ch += 32;
	else if ((ch >= 'a') && (ch <= 'z'))
		ch -= 32;
	else
		printf("안됩니다.\n");

	putchar(ch);
}