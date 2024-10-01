//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int searchSummits(int* results, int* stream, int size, int size_2);
//
//void main(){
//	int size = 8;
//	int numbers[8];
//	int size_2 = 5;
//	printf("enter 8 numbers:\n");
//	for (int i = 0; i < size; i++) {
//		printf("array[%d]: ", i);
//		scanf_s(" %d", &numbers[i]);
//	}
//	int* summits = (int*) malloc(size_2 * sizeof(int));
//	if (!summits) {
//		printf("error in allocation");
//		exit (1);
//	}
//	int Summits = searchSummits(summits, numbers, size, size_2);
//	printf("\nsummits: ");
//	for (int tops = 0; tops < Summits; tops++) {
//		printf("summit[%d] = %d		", tops, summits[tops]);
//	}
//}
//
//int searchSummits(int* results, int* stream, int size, int size_2) {
//	int summit = 0;
//	for (int index = 0; index < size; index++) {
//		if (index == 0) {
//			if (stream[index] > stream[index + 1]) {
//				*(results + summit) = stream[index];
//				summit++;
//			}
//		}
//		else {
//			if (index > 0 && index < size - 1) {
//				if (stream[index] > stream[index - 1] && stream[index] > stream[index + 1]) {
//					*(results + summit) = stream[index];
//					summit++;
//				}
//			}
//			else{
//				if(index == size - 1) {
//					if (stream[index] > stream[index - 1]) {
//						*(results + summit) = stream[index];
//						summit++;
//					}
//				}
//			}
//		}
//	}
//	return summit;
//}
