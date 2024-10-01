//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//void main() {
//	int pal;
//	printf("Enter a number:\n");
//	scanf_s("%d", &pal);
//	int t, h, d, u;
//	u = pal % 10;
//	d = (pal % 100 - u)/10;
//	h = (pal % 1000 - (d + u))/100;
//	t = (pal - (h + d + u))/1000;
//	if (pal / 1000 == 0)
//		printf("invalid number!");
//	else
//		if (t == u)
//			if (h == d)
//				printf("the number is palindrom");
//			else
//				printf("the number is not a palindrom");
//		else
//			printf("the number is not a palindrom");
//}