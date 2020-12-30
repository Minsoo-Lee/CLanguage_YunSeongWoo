#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void choice(int a, int b);
void rsp(int n);

int main(void) {
	int user, com, win = 0, draw = 0, lose = 0;
	
	while (1) {
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &user);
		com = (rand() % 3) + 1;

		choice(user, com);
		if (user == com) {
			printf("�����ϴ�.\n");
			draw++;
		}
		else if (user < com) {
			if (com - user == 2) {
				printf("����� �����ϴ�.\n");
				lose++;
			}
			else {
				printf("����� �̰���ϴ�.\n");
				win++;
			}
		}
		else if (com > user) {
			if (user - com == 2) {
				printf("����� �̰���ϴ�.\n");
				win++;
			}
			else {
				printf("����� �����ϴ�.\n");
				lose++;
			}
		}
		if (lose == 1)
			break;
	}
}

void choice(int a, int b) {
	printf("����� ");
	rsp(a);
	printf(" ����, ��ǻ�ʹ� ");
	rsp(b);
	printf(" ����,");
}

void rsp(int n) {
	switch (n) {
	case 1:
		printf("����");
		break;
	case 2:
		printf("����");
		break;
	case 3:
		printf("��");
		break;
	}
}