#include <stdio.h>

int main(void) {
	float arr[5][5];
	for (int i = 0; i < 4; i++) {
		printf("P%d 성적 입력(국어, 영어, 수학, 도덕): ", i+1);
		for (int j = 0; j < 4; j++) {
			scanf("%f", &arr[i][j]);
		}
		printf("\n");
	}
	arr[4][4] = 0;
	for (int i = 0; i < 4; i++) {
		arr[i][4] = 0;
		arr[4][i] = 0;	
		for (int j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];
			arr[4][i] += arr[j][i];
		}
		arr[4][4] += arr[i][4];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%.1f ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}