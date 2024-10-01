//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//void main() {
//	char t;
//	int a;
//	float s;
//	printf("press F to convert from Fahrenheit to Celsius.\npress C to convert from Celsius to Fahrenheit.\nEnter your choise (C/F):  ");
//	scanf_s("%c", &t);
//	switch (t) {
//	case 'c':
//	case 'C':
//		printf("enter tempreture in Celsius:\n");
//		scanf_s("%d", &a);
//		s = a * 1.8 + 32;
//		printf("tempreture in Fahrenheit is: %.2f\n", s);
//		break;
//
//	case 'f':
//	case 'F':
//		printf("enter tempreture in Fahrenheit:\n");
//		scanf_s("%d", &a);
//		s = (a - 32) / 1.8;
//		printf("tempreture in Celsius is: %.2f\n", s);
//		break;
//
//	default:
//		printf("Invalid Choise !\n");
//		break;
//	}
//	
//}