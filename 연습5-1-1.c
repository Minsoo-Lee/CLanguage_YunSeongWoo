#include <stdio.h>

int main(void) {
	int x1, y1, x2, y2, n;

	printf("첫 번째 포인트의 x, y 좌표: ");
	scanf("%d %d", &x1, &y1);
	printf("두 번째 포인트의 x, y 좌표: ");
	scanf("%d %d", &x2, &y2);

	n = (x2 - x1) * (y2 - y1);
	printf("넓이: %d", n);

	return 0;
}