#include <stdio.h>	

int main(void) {
	char ch;
	printf("���� �Է�: ");
	ch = getchar();

	if ((ch >= 'A') && (ch <= 'Z'))
		ch += 32;
	else if ((ch >= 'a') && (ch <= 'z'))
		ch -= 32;
	else
		printf("�ȵ˴ϴ�.\n");

	putchar(ch);
}