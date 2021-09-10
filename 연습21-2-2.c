#include <stdio.h>
#include <string.h>	

void add(char* a, char* b, char* c, char* d) {
	strcat(a, b);
	strcat(a, c);
	strcpy(d, a);
}
int main(void) {
	char a[50], b[50], c[50];
	char res[50];
	gets(a);
	gets(b);
	gets(c);

	if (strcmp(a, b) > 0)
		if (strcmp(a, c) < 0)
			add(c, a, b, res);
		else
			if (strcmp(c, b) > 0)
				add(a, c, b, res);
			else
				add(a, b, c, res);
	else
		if (strcmp(b, c) < 0)
			add(c, b, a, res);
		else
			if (strcmp(c, a) > 0)
				add(b, c, a, res);
			else
				add(b, a, c, res);

	fputs(res, stdout);
}