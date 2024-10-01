//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#define ROWS 5
//
//int stringsthesame(char arr1[],char arr2[]);
//
//void main() {
//	char arr1[10];
//	char arr2[10];
//	printf("please enter up to a 10 letter string:\n");
//	gets(arr1);
//	printf("please enter another up to a 10 letter string:\n");
//	gets(arr2);
//	int outcome = stringsthesame(arr1, arr2);
//	if (outcome == 0) {
//		printf("the value of %s and %s is not equal", arr1, arr2);
//	}
//	else
//		printf("the value of %s and %s is equal\n", arr1, arr2);
//}
//
//int stringsthesame( char arr1[10], char arr2[10]) {
//	int index = 0;
//	while (index < 10) {
//		if (arr1[index] == arr2[index] || arr1[index] + 32 == arr2[index] || arr1[index] == arr2[index] + 32) {
//			index++;
//		}
//		else
//			return 0;
//	}
//	return 1;
//}