#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a, b, c, d;
	int counter = 0;
	printf("enter 4 numbers: \n");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if (a % 2 == 1) {
		counter += 1;
	}
	if (b % 2 == 1) {
		counter += 1;
	}
	if (c % 2 == 1) {
		counter += 1;
	}
	if (d % 2 == 1) {
		counter += 1;
	}
	printf("the number of odd numbers is %d", counter);
}