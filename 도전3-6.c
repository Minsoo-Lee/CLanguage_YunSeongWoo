#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int n= 0;
	srand((int)time(NULL));
	int com[3], user[3], strike = 0, ball = 0, count = 0;;
	printf("Start Game!\n");
	while (n != 3) {
		com[n] = rand() % 10;
		if ((com[n] == com[n - 1]) || (com[n] == com[n - 2])) {
			printf("no\n");
			continue;
		}
		n++;
	}

	while (strike != 3) {
		strike = 0;
		ball = 0;
		printf("3개의 숫자 선택: ");
		for (int i = 0; i < 3; i++)
			scanf("%d", &user[i]);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (com[i] == user[j]) {
					if (i == j)
						strike++;
					else
						ball++;
				}

			}
		}
		count++;
		printf("%d번째 도전 결과: %dstrike, %dball!\n\n", count, strike, ball);
	}

	printf("컴퓨터의 수: ");
	for (int i = 0; i < 3; i++)
		printf("%d ", com[i]);
	printf("\nGame End!\n");
}