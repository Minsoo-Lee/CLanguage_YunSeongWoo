#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((int)time(NULL));
	printf("�ֻ��� ���: ");
	for (int i = 0; i < 2; i++)
		printf(" %d ", (rand() % 6) + 1);

	return 0;
}