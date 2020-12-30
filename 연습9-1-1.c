#include <stdio.h>

int Max(int a, int b, int c);
int Min(int a, int b, int c);

int main(void) {
	int a, b, c, min, max;

	scanf("%d %d %d", &a, &b, &c);
	min = Min(a, b, c);
	max = Max(a, b, c);

	printf("%d %d", min, max);
	return 0;
}

int Max(int a, int b, int c) {
	int Max;
	if (a > b) {
		if (a > c)
			Max = a;
		else if (c > b)
			Max = c;
	}
	else {
		if (b > c)
			Max = b;
		else if (c > a)
			Max = c;
	}
	return Max;
}

int Min(int a, int b, int c) {
	int Min;
	if (a < b) {
		if (a < c)
			Min = a;
		else if (c < b)
			Min = c;
	}
	else {
		if (b < c)
			Min = b;
		else if (c < a)
			Min = c;
	}
	return Min;
}