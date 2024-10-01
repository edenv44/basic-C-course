//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int main() {
//	int array[10];
//	int a;
//	printf("enter 10 numbers:\n");
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%d", &a);
//		array[i] = a;
//	}
//	int counter = 0;
//	for (int n = 0; n < 10; n++) {
//		if (array[n] < 0)
//			counter++;
//	}
//	int negative_arr[10];
//	int d = 9;
//	for (int n = 9; n >= 0; n--) {
//		if (array[n] < 0) {
//			negative_arr[d] = array[n];
//			d--;
//		}
//	}
//	for (int e = 0; e < 10; e++) {
//		if (array[e] < 0) {
//			for (int g = e + 1; g < 10; g++) {
//				if (array[g] > 0) {
//					int temp = array[e];
//					array[e] = array[g];
//					array[g] = temp;
//					break;
//				}
//				else
//					continue;
//			}
//		}
//	}
//	for (int f = 9; f >= 10 - counter; f--) {
//		if (negative_arr[f] < 0) {
//			array[f] = negative_arr[f];
//		}
//	}
//	for (int p = 0; p < 10; p++) {
//		printf("	%d", array[p]);
//	}
//
//}