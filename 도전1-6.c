#include <stdio.h>

int main(void) {
	int second, minute, hour;

	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf("%d", &second);
	
	hour = second / 3600;
	minute = (second - hour*3600) / 60;
	second = second - (hour * 3600 + minute * 60);

	printf("[h:%d, m:%d, s:%d]", hour, minute, second);

	return 0;

}