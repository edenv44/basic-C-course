//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 
//
//void main() {
//	int num1, num1_1, num1_2, num1_3, num1_4, num1_5;
//	int num2, num2_1, num2_2, num2_3, num2_4, num2_5;
//	int constNum = 2, result = 0;
//	int dup1, dup2;
//
//
//	//Get the input from the user
//	printf("Enter 2 numbers: ");
//	scanf_s("%5d %5d", &num1, &num2);
//
//	dup1 = num1;
//	dup2 = num2;
//
//
//	//Separating numbers elements
//	num1_1 = num1 % 10;
//	num1_2 = num1 / 10 % 10;
//	num1_3 = num1 / 100 % 10;
//	num1_4 = num1 / 1000 % 10;
//	num1_5 = num1 / 10000 % 10;
//
//	num2_1 = num2 % 10;
//	num2_2 = num2 / 10 % 10;
//	num2_3 = num2 / 100 % 10;
//	num2_4 = num2 / 1000 % 10;
//	num2_5 = num2 / 10000 % 10;
//
//
//	//Convert numbers to decimal format
//	num1 = (num1_1 * 1) + (num1_2 * constNum) + (num1_3 * constNum * constNum) +
//		(num1_4 * constNum * constNum * constNum) + (num1_5 * constNum * constNum * constNum * constNum);
//
//	num2 = (num2_1 * 1) + (num2_2 * constNum) + (num2_3 * constNum * constNum) +
//		(num2_4 * constNum * constNum * constNum) + (num2_5 * constNum * constNum * constNum * constNum);
//
//	result = num1 + num2;
//
//
//	//Convert the result number.
//	int result_1, result_2, result_3, result_4, result_5;
//	result_1 = result % 2;
//	result = result / 2;
//	result_2 = result % 2;
//	result = result / 2;
//	result_3 = result % 2;
//	result = result / 2;
//	result_4 = result % 2;
//	result = result / 2;
//	result_5 = result % 2;
//	result = result / 2;
//
//
//	printf("(%d)%d + (%d)%d = (%d%d%d%d%d)%d", dup1, constNum, dup2, constNum,
//		result_5, result_4, result_3, result_2, result_1, constNum);
//
//}