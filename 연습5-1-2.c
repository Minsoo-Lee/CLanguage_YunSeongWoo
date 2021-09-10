#include <stdio.h>

int main(void) {
	double a, b;

	scanf("%lf %lf", &a, &b);

	printf("µ¡¼À : %.1lf\n", a + b);
	printf("»¬¼À : %.1lf\n", a - b);
	printf("°ö¼À : %.1lf\n", a * b);
	printf("³ª´°¼À : %.1lf", a / b);

	return 0;
}