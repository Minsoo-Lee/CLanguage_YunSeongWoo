#include <stdio.h>

int main(void) {
	int h_money = 3500, cream, shrimp, coke;

	for (cream = 1; cream < 7; cream++) {
		for (shrimp = 1; shrimp < 5; shrimp++) {
			if ((3500 - (cream * 500 + shrimp * 700)) % 400 == 0) {
				coke = (3500 - (cream * 500 + shrimp * 700)) / 400;
				if (coke > 0)
					printf("Å©¸²»§ %d°³, »õ¿ì±ø %dºÀÁö, ÄÝ¶ó %dº´\n", cream, shrimp, coke);

			}
		}
	}
}