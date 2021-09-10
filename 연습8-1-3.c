#include <stdio.h>

int main(void) {
	int math, eng, kor;
	float avg;
	char grade;
	scanf("%d %d %d", &kor, &eng, &math);

	avg = (float)(kor + eng + math) / 3.0;

	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else if (avg >= 70)
		grade = 'C';
	else if (avg >= 50)
		grade = 'D';
	else
		grade = 'F';

	printf("%.1lf\t%c", avg, grade);
	return;

}