//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define ROW_SIZE 6
//#define COL_SIZE 6
//
//int confusedArray(char arr[][COL_SIZE], int size3);
//int halfReverseHalfDifferent(char arr1[], int size1, char arr2[], int size2);
//
//void main() {
//	char arr1[ROW_SIZE][COL_SIZE], k, temp;
//	printf("PLease enter 36 letters (a-z or A-Z):\n");
//	for (int i = 0; i < ROW_SIZE; i++) {
//		for (int k = 0; k < COL_SIZE; k++) {
//			scanf(" %c", &arr1[i][k]);
//
//
//			if (arr1[i][k] < 65 || arr1[i][k] > 122) {
//				printf("You entered an incorrect character, re-enter a Letter: ");
//				k--;
//			}
//		}
//	}
//	temp = confusedArray(arr1, COL_SIZE);
//	if (temp == 1)
//		printf("The array of letters is confused");
//	else printf("The array of letters is not confused");
//}
//
//int confusedArray(char arr[][COL_SIZE], int size3) {
//	int temp = 0;
//	for (int i = COL_SIZE - 1, k = 0; k < COL_SIZE / 2; k++, i--)
//		temp = temp + halfReverseHalfDifferent(arr[k], size3, arr[i], size3);
//	if (temp == COL_SIZE / 2) {
//		return 1;
//	}
//	else return 0;
//}
//
//int halfReverseHalfDifferent(char arr1[], int size1, char arr2[], int size2) {
//	int count = 0, count1 = 0;
//	for (int i = 0, j = size1 - 1; i < size1 / 2; i++, j--) { // Half reverse
//		if (arr1[j] == arr2[i]) {
//			count++; /*3 for halfreversed */ 
//		}
//	}
//	for (int k = size1 / 2, p = 0; p < (size1 / 2); p++) { // half different
//		if (arr1[p] != arr2[k] && arr1[p] != arr2[k + 1] && arr1[p] != arr2[k + 2])
//			count1++; /*3 for half different */ 
//	}
//	if (count + count1 == size1)
//		return 1;
//	else return 0;
//}