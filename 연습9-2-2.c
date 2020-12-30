#include <stdio.h>

void stack(int n);

int main(void) {
	int money;
	while (1) {
		printf("저금할 금액: ");
		scanf("%d", &money);
		if (money < 0) break;
		stack(money);
	}
	printf("입금 완료\n");
	return 0;
}

void stack(int n) {
	static int t_money=0;
	t_money += n;
	printf("누적 금액: %d\n", t_money);
}