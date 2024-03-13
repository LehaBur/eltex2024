#include <stdio.h>

void bit(int b) {
	int count = 0;
	for(int i = 31; i >= 0 ; i--) {
		if (!((i + 1) % 8) && (i < 31)) {
			printf(" ");
		}
		if ((b >> i) & 1) {
			printf("1");
			count ++;
		}
		else {
			printf("0");
		}
	}
	printf("\n");
	printf("Количество единиц: %d\n", count);
}

void putin3(int b, int d) {
	for(int i = 31; i >= 0; i --) {
		if (!((i + 1) % 8) && (i < 31)) {
			printf(" ");
		}
		if ((i <= 23) && (i > 15)) {
			if ((d >> (i - 16)) & 1) {
				printf("1");
			} else{
				printf("0");
			}
		} else if ((b >> i) & 1) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	printf("\n");
}

int main() {
	int b = 0;
	int d = 0;
	scanf("%d", &b);
	bit(b); //Отрицательное число выводится в виде дополнительного кода
	scanf("%d", &b);
	scanf("%d", &d);
	putin3(b, d);
}