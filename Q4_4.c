//#include <stdio.h>
//#define _CRT_SECURE_N0_WARNINGS
//
//void main() {
//	int base;
//	printf("base size: ");
//	scanf_s("%d", &base);
//	int f = base;
//	if (base % 2 == 0) {
//		base = (base / 2) - 1;
//	}
//	else {
//		base = base / 2;
//	}
//	for (int maxst = 1; maxst <= base; maxst++) {
//		int star = 1;
//		while (star <= f) {
//			if (star <= maxst){
//				printf("*");
//				++star;
//			}
//			else {
//				printf("#");
//				++star;
//			}
//		}
//		printf("\n");
//	}
//	for (int lestar = (base-1); lestar > 0; lestar--) {
//		int n = f;
//		int y = lestar;
//		while (n > 0) {
//			if (y <= lestar && y > 0) {
//				printf("*");
//				--y;
//				--n;
//			}
//			else {
//				printf("#");
//				--y;
//				--n;
//			}
//		}
//		printf("\n");
//	}
//}