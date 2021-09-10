#include <stdio.h>

int GCM(int a, int b);

int main(void) {
	int a, b, gcm;
	printf("두 개의 정수입력: ");
	scanf("%d %d", &a, &b);

	if (a > b)
		gcm = GCM(b, a);
	else
		gcm = GCM(a, b);

	printf("GCM: %d", gcm);
	return 0;
}

int GCM(int a, int b) {
	int i, res;
	for (i = 1; i <= a; i++) {
		if ((a % i == 0) && (b % i == 0)) {
			res = i;
		}
	}
	return res;
}