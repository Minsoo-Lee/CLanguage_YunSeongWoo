#include <stdio.h>

struct Employee {
	char name[50];
	char id[50];
	int pay;
};

int main(void) {
	struct Employee p1;
	printf("�̸�, �ֹε�Ϲ�ȣ, ���� �Է�: ");
	scanf("%s %s %d", &p1.name, &p1.id, &p1.pay);

	printf("%s %s %d", p1.name, p1.id, p1.pay);
}