//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int triangle(int base);
//
//void main() {
//	int base;
//	printf("enter an odd number bigger then 1:\n");
//	scanf_s("%d", &base);
//	while (base <= 1 || base % 2 == 0) {
//		printf("this is not an odd larger then 1 number try again...\n");
//		printf("enter an odd number bigger then 1:\n");
//		scanf_s("%d", &base);
//	}
//	triangle(base);
//}
//
//int triangle(int base) {
//	int top = (base / 2) + 1;
//	for (int i = 0; i < (top - 1); i++) {
//		for (int line = 0; line <= base; line++) {
//			if (line == top + i || line == top - i) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	int last_line;
//	printf(" ");
//	for (last_line = 0; last_line < base; last_line++) {
//		printf("*");
//	}
//}