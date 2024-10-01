//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int howManyContain(char* str, char* str2);
//void main()
//{
//	char str[50], str2[10];
//	do
//	{
//		printf("please enter two strings until the first string is longer than the second:\n");
//		gets(str);
//		gets(str2);
//	} while (strlen(str) <= strlen(str2));
//	printf("%d", howManyContain(str, str2));
//
//}
//int howManyContain(char* str, char* str2){
//	int i = 0,j = 0;
//	if (*str == NULL){
//		return 0;
//	}
//	while (*str + i != NULL){
//		if (i > strlen(str)) {
//			return 0;
//		}
//		if (*(str + i) == *(str2 + j) && *(str + i) != NULL) {
//			j += 1;
//			i++;
//		}
//		else {
//			if (j == strlen(str2)) {
//				return(1 + howManyContain(str + i, str2));
//			}
//			else {
//				i++;
//				j = 0;
//			}
//		}
//	}
//}