#include <stdio.h>

int main(void) {
	int x1, y1, x2, y2, n;

	printf("ù ��° ����Ʈ�� x, y ��ǥ: ");
	scanf("%d %d", &x1, &y1);
	printf("�� ��° ����Ʈ�� x, y ��ǥ: ");
	scanf("%d %d", &x2, &y2);

	n = (x2 - x1) * (y2 - y1);
	printf("����: %d", n);

	return 0;
}