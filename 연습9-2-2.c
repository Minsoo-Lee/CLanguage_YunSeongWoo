#include <stdio.h>

void stack(int n);

int main(void) {
	int money;
	while (1) {
		printf("������ �ݾ�: ");
		scanf("%d", &money);
		if (money < 0) break;
		stack(money);
	}
	printf("�Ա� �Ϸ�\n");
	return 0;
}

void stack(int n) {
	static int t_money=0;
	t_money += n;
	printf("���� �ݾ�: %d\n", t_money);
}