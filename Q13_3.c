//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define SIZE 6
//
//int howManyPos(int* arr, int size);
//int howMany(int* arr, int size);
//
//void main() {
//	int numarr[SIZE];
//	int index = 1;
//	printf("please enter %d numbers:", SIZE);
//	for (int i = 0; i < SIZE; i++) {
//		scanf(" %d", &numarr[i]);
//	}
//	int amount = howMany(numarr, SIZE);
//	printf("there are %d sub-arrays", amount);
//}
//
//int howMany(int* arr, int size) {
//	static int subarr = 0;
//	if (size == 0) {
//		return subarr;
//	}
//	int positive = howManyPos(arr, size);
//	if (positive >= size - (size/ 2)) {
//		subarr += 1;
//	}
//	return howMany(arr + 1, size - 1);
//}
//
//int howManyPos(int* arr, int size) {
//	if (size == 0) {
//		return 0;
//	}
//	else {
//		if (*arr > 0) {
//			return (howManyPos(arr + 1, size - 1) + 1);
//		}
//		else {
//			return howManyPos(arr + 1, size - 1);
//		}
//	}
//}