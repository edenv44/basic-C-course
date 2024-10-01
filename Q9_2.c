//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void hidingWord(char* sentence, char* word);
//
//void main() {
//	char sentence[50];
//	char word[10];
//	printf("please enter a sentence: ");
//	gets(sentence);
//	printf("\n");
//	printf("please enter a word: ");
//	gets(word);
//	hidingWord(sentence, word);
//	printf("%s", sentence);
//}
//
//void hidingWord(char* sentence, char* word) {
//	int length = strlen(word);
//	while (strstr(sentence, word) != 0) {
//		char* place = strstr(sentence, word);
//		for (int i = 0; i < length; i++) {
//			*(place + i) = '*';
//		}
//	}
//}