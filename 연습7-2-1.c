#include <stdio.h>

int main(void) {
	int n, count=0, i=1, sum=0;

	while (count < 5) {
		printf("0 ���� ū ���� �Է�(%d��°): ", i);
		scanf("%d", &n);
		i++;
		while (n <= 0) {
			printf("0 ���� ū ���� �ٽ� �Է�(%d��°): ", i);
			scanf("%d", &n);
			i++;
		}
		sum += n;
		count++;
	}
	printf("�Էµ� ���� �� ��: %d\n", sum);
	return 0;
}