//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int find_power();
//int numbers_merge();
//
//int main(){
//	int n, m;
//	printf("enter 2 numbers:\n");
//	scanf_s("%d %d", &n, &m);
//	int new_number = numbers_merge(n, m);
//	printf("the merged number is %d", new_number);
//}
//
//int find_power(int n) {
//	int counter = 0;
//	while (n != 0) {
//		n = n / 10;
//		counter += 1;
//	}
//	return counter;
//}
//int numbers_merge(int n, int m) {
//	int zero = find_power(n);
//	int multy = 1;
//	for (int i = 0; i < zero; i++) {
//		multy = multy * 10;
//	}
//	n = n * multy;
//	int merge = n + m;
//	return merge;
// }
