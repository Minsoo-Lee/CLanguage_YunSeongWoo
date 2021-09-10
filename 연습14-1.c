#include <stdio.h>

int square_CBV(int a);
void square_CBR(int* a);

int main(void) {
	int n;

	scanf("%d", &n);

	printf("CBV : %d\n", square_CBV(n));
	square_CBR(&n);
	printf("CBR : %d", n);

	return 0;
}

int square_CBV(int a) {
	int res;
	res = a * a;
	return res;
}

void square_CBR(int* a) {
	*a = (*a) * (*a);
}