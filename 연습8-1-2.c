#include <stdio.h>

int main(void) {
	int a, b, res;
	scanf("%d %d", &a, &b);
	if (a > b)
		res = a - b;
	else
		res = b - a;

	printf("%d", res);
	return;

}