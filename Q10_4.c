//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE1 5
//#define SIZE2 3
//
//void getNumbers(int* ptr, int size);
//void printArray(int* arr, int size);
//void MergeArrays(int* ptr1, int size1, int* ptr2, int size2);
//
//void main(){
//	int arr1[SIZE1], arr2[SIZE2];
//	printf("enter numbers to first array:\n");
//	getNumbers(arr1, SIZE1);
//	printf("enter numbers to second array:\n");
//	getNumbers(arr2, SIZE2);
//	MergeArrays(arr1, SIZE1, arr2, SIZE2);
//}
//
//void getNumbers(int* ptr, int size){
//	for (int i = 0; i < size; i++) {
//		printf("array[%d]: ", i);
//		scanf_s("%d", (ptr + i));
//	}
//}
//
//void MergeArrays(int* ptr1, int size1, int* ptr2, int size2){
//	int* newArray = (int)malloc((size1 + size2 + 1) * sizeof(int));
//	int a = 0, s = 0;
//	if (!newArray){
//		printf("error");
//		return 0;
//	}
//	else{
//		for (int i = 0; i < size1 + size2; i++){
//			if (a == size1) {
//				*(newArray + i) = *(ptr2 + s);
//				s++;
//			}
//			else {
//				if (s == size2) {
//					*(newArray + i) = *(ptr1 + a);
//					a++;
//				}
//				else {
//					if (*(ptr1 + a) > *(ptr2 + s)) {
//						*(newArray + i) = *(ptr2 + s);
//						s++;
//					}
//					else {
//						*(newArray + i) = *(ptr1 + a);
//						a++;
//					}
//				}
//			}
//		}
//	}
//	printArray(newArray, (size1 + size2));
//	free(newArray);
//	newArray = NULL;
//}
//
//void printArray(int* arr, int size){
//	printf("the array is:");
//	for (int i = 0; i < size; i++){
//		printf("\narr[%d] = %d", i, *(arr + i));
//	}
//}