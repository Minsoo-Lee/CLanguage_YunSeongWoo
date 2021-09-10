#include <stdio.h>

void swap(int* a, int* b, int* c);

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	swap(&a, &b, &c);

	printf("%d %d %d", a, b, c);

	return 0;
}

void swap(int* a, int* b, int* c) {
	int tmp;

	tmp = *a;
	*a = *c;
	*c = *b;
	*b = tmp;
}