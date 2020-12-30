#include <stdio.h>

void MaxMin(int* a, int** p1, int** p2);
int main(void) {
	int* max, * min, arr[5];

	printf("정수 5개 입력: ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	MaxMin(arr, &max, &min);

	printf("%d %d\n", *min, *max);
}

void MaxMin(int* a, int** p1, int** p2) {
	int* mx, * mn;
	mx = mn = a;
	for (int i = 0; i < 5; i++) {
		if (a[i] < (*mn)) mn = &a[i];
		else mx = &a[i];
	}
	*p1 = mn;
	*p2 = mx;
}