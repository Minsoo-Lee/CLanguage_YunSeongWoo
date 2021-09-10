#include <stdio.h>

int mul(int a, int b);

int main(void) {
	int a, b, i=0;

	while(1) {
		printf("두 개의 숫자 입력: ");
		scanf("%d %d", &a, &b);

		if ((a == 0) && (b == 0)) {
			printf("총 %d번 연산하였습니다.\n", i);
			break;
		}
		else {
			printf("연산 결과: %d\n", mul(a, b));
			i++;
		}
	}
	return 0;
}

int mul(int a, int b) {
	int res;
	res = a * b;
	return res;
}