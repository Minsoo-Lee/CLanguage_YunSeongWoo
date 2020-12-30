#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void choice(int a, int b);
void rsp(int n);

int main(void) {
	int user, com, win = 0, draw = 0, lose = 0;
	
	while (1) {
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &user);
		com = (rand() % 3) + 1;

		choice(user, com);
		if (user == com) {
			printf("비겼습니다.\n");
			draw++;
		}
		else if (user < com) {
			if (com - user == 2) {
				printf("당신이 졌습니다.\n");
				lose++;
			}
			else {
				printf("당신이 이겼습니다.\n");
				win++;
			}
		}
		else if (com > user) {
			if (user - com == 2) {
				printf("당신이 이겼습니다.\n");
				win++;
			}
			else {
				printf("당신이 졌습니다.\n");
				lose++;
			}
		}
		if (lose == 1)
			break;
	}
}

void choice(int a, int b) {
	printf("당신은 ");
	rsp(a);
	printf(" 선택, 컴퓨터는 ");
	rsp(b);
	printf(" 선택,");
}

void rsp(int n) {
	switch (n) {
	case 1:
		printf("바위");
		break;
	case 2:
		printf("가위");
		break;
	case 3:
		printf("보");
		break;
	}
}