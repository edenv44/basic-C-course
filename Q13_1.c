//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int numberAlternate(int num);
//
//void main(){
//	int num;
//	printf("please enter a number here: ");
//	scanf_s(" %d", &num);
//	int check = numberAlternate(num);
//	if (check == 1)
//		printf("the number is a rotateing number");
//	else
//		printf("the number is a normal number");
//}
//
//int numberAlternate(int num) {
//	static int counter = 0;
//	if (num == 0) {
//		return 1;
//	}
//	if (counter == 0) {
//		if (num % 2 == 0) {
//			counter = 2;
//			numberAlternate(num / 10);
//		}
//		else {
//			counter = 1;
//			numberAlternate(num / 10);
//		}
//	}
//	if (counter % 2 == 0) {
//		if (num % 2 == 0) {
//			counter++;
//			numberAlternate(num / 10);
//		}
//		else {
//			return 0;
//		}
//	}
//	else {
//		if (counter % 2 == 1) {
//			if (num % 2 == 1) {
//				counter++;
//				numberAlternate(num / 10);
//			}
//			else {
//				return 0;
//			}
//		}
//	}
//}