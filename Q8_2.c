//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void Remove_All_Duplicate(char t_array[19]);
//int creatString(char f_array[10], char s_array[10], char t_array[19]);
//
//int main() {
//	char f_array[10];
//	char s_array[10];
//	char t_array[19];
//	printf("please enter first string:\n");
//	scanf("%s", f_array);
//	printf("please enter second string:\n");
//	scanf("%s", s_array);
//	creatString(f_array, s_array, t_array);
//	Remove_All_Duplicate(t_array);
//	printf("new string is: %s\n", t_array);
//}
//
//int creatString(char f_array[10], char s_array[10], char t_array[19]) {
//	int same = strcmp(f_array, s_array);
//	if (same == 0) {
//		printf("the strings are the same\n");
//		_strrev(f_array);
//		strcpy(t_array, f_array);
//	}
//	if (same > 0) {
//		_strrev(f_array);
//		_strrev(s_array);
//		strcpy(t_array, f_array);
//		strcat(t_array, s_array);
//	}
//	if (same < 0) {
//		_strrev(f_array);
//		_strrev(s_array);
//		strcpy(t_array, s_array);
//		strcat(t_array, f_array);
//	}
//}
//
//void Remove_All_Duplicate(char t_array[19]) {
//	int i = 0, j, k;
//	while (i < strlen(t_array)){
//		j = i + 1;
//		while (t_array[j] != '\0'){
//			if (t_array[j] == t_array[i]){
//				k = j;
//				while (t_array[k] != '\0'){
//					t_array[k] = t_array[k + 1];
//					k++;
//				}
//			}
//			j++;
//		}
//		i++;
//	}
//}