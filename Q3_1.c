#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int a;
	printf("enter a number: \n");
	scanf_s("%d", &a);
	if (a > 0) {
		printf("number is positive");
	}
	else
		if (a < 0) {
			printf("number is negative");
		}
		else
			if (a == 0) {
				printf("number is zero");
			}
}