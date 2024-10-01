//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//char* myItoa(intnum);
//
//void main(){
//	printf("please enter a number: ");
//	int num;
//	scanf_s("%d", &num);
//	char* str = myItoa(num);
//	printf("\nresult: %s", str);
//	free(str);
//	str = NULL;
//}
//
//char* myItoa(int num){
//	int temp = num, size = 0;
//	int negative = 0;
//	if (temp == 0) {
//		char* zero = (char*)malloc(2 * sizeof(char));
//		*zero = '0';
//		*(zero + 1) = '\0';
//		return zero;
//	}
//	while (temp != 0){
//		temp = temp / 10;
//		size++;
//	}
//	if (num < 0) {
//		num = num * (-1);
//		negative++;
//		size++;
//	}
//	char* str = (char*)malloc((size + 1) * sizeof(char));
//	if (str == 0){
//		printf("error in allocation");
//		return 0;
//	}
//	else{
//		for (int i = size - 1; i >= 0; i--){
//			if (num != 0) {
//				*(str + i) = (num % 10) + '0';
//				num = num / 10;
//			}
//			else
//				continue;
//		}
//		if (negative == 1) {
//			*str = '-';
//		}
//		str[size] = '\0';
//		return str;
//	}
//}
