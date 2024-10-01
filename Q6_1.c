//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#define SIZE 5
//
//int main() {
//	printf("please enter 5 numbers:\n");
//	int arr[SIZE];
//	int a;
//	int sum = 0;
//	for (int index = 0; index < SIZE; index++) {
//		scanf_s("%d", &a);
//		arr[index] = a;
//		sum += a;
//	}
//	int min = arr[0];
//	int max = arr[0];
//	for (int i = 0; i < SIZE; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//	}
//	float average = (float)sum / SIZE;
//	printf("min value is: %d\n", min);
//	printf("max value is: %d\n", max);
//	printf("sum of all numbers is: %d\n", sum);
//	printf("average of all numbers is: %f\n", average);
//}