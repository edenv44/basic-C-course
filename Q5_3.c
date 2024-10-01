//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int Armstrong(int max, int digi, int index);
//int how_many(int index);
//int sum_of_digi(int digi, int t);
//
//int main() {
//	int max;
//	printf("enter a number:\n");
//	scanf_s("%d", &max);
//	int num = 0;
//	for (int index = 1; index <= max; index++) {
//		int digi = how_many(index);
//		num = Armstrong(max, digi, index);
//		if (num == index)
//			printf("the number %d is an armstrong number\n", num);
//	}
//}
//
//int Armstrong(int max, int digi, int index) {  // sums up all digits
//	int num = 0;
//	for (int g = 0; g < digi; g++) {
//		while (index != 0) {
//			num += sum_of_digi(digi, index % 10);
//			index = index / 10;
//		}
//	}
//	return num;
//}
//
//int how_many(int index) {  // find the amount of digits in the number
//	int digits = 0;
//	while (index != 0) {
//		index = index / 10;
//		digits += 1;
//	}
//	return digits;
//}
//
//int sum_of_digi(int digi, int t) {  // multiplies the same digit
//	int sum = 1;
//	for (int d = 0; d < digi; d++) {
//		sum = sum * t;
//	}
//	return sum;
//}