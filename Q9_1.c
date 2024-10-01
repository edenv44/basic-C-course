//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void swapPairChs(char* iptr_str);
//
//int main(){
//	int i = 0;
//	char x;
//	char long_str[50];
//	printf("enter string:\n");
//	scanf("%s", long_str);
//	char* iptr_str = &long_str;
//	swapPairChs(iptr_str);
//	printf("str = ");
//	printf(long_str);
//}
//
//void swapPairChs(char* iptr_str) {
//
//	for (int letter = 0; *(iptr_str + letter) != '\0'; letter += 2) {
//		if (*(iptr_str + letter + 1) == '\0')
//			*(iptr_str + letter) = '\0';
//		char temp = *(iptr_str + letter);
//		*(iptr_str + letter) = *(iptr_str + letter + 1);
//		*(iptr_str + letter + 1) = temp;
//	}
//}