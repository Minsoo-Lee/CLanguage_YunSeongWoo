#include <stdio.h>

int main(void) {
	int arr[10];
	printf("�� 10���� ���� �Է�: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Ȧ�� ���: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}
	printf("\n¦�� ���: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	return 0;
}