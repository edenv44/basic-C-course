//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int countWordsIfExist(char* text, char* word);
//int main() {
//	char text[50];
//	char word[10];
//	int res;
//	printf("please enter a sentence:");
//	gets(text);
//	printf("please enter a word:");
//	gets(word);
//	res = countWordsIfExist(text, word);
//	printf("the word %s is contained %d times in the text", word, res);
//}
//
//int countWordsIfExist(char* text, char* word) {
//	int counter = 0;
//	char* sec_text = text;
//	int len = strlen(word);
//	int let_count = 0;
//	/*strcpy(sec_text, text);
//	char* cptr = &sec_text;
//	phrase = strstr(sec_text, word);
//	while (phrase != 0) {
//		phrase = strstr(cptr, word);
//		counter++;
//		cptr += len+1;
//	}
//	return counter;*/
//	while (*text != '\0') {
//		if (*text == *word) {
//			sec_text = text;
//			for (int letter = 0; letter < len; letter++) {
//				if (*(sec_text+letter) != *(word+letter)) {
//					let_count = 0;
//					break;
//				}
//				let_count += 1;
//				if (let_count == len) {
//					counter++;
//					let_count = 0;
//				}
//			}
//		}
//		*text++;
//	}
//	return counter;
//}