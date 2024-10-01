//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define SIZE 40
//
//char* initString();
//
//int main() {
//	int new_str = initString();
//	printf("user enterd: ***%s***", new_str);
//	free(new_str);
//	new_str = NULL;
//}
//
//char* initString() {
//	char str[SIZE];
//	char* new_str = malloc(SIZE * sizeof(char));
//	if (!new_str) {
//		printf("error in allocation");
//		return 0;
//	}
//	printf("enter a text: ");
//	gets(str);
//	strcpy(new_str, str);
//	return new_str;
//}