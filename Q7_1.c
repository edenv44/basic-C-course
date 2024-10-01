//#include <stdio.h>
//int kfour();
//
//int main() {
//	printf("enter 25 positive numbers:\n");
//	int two_d[5][5];
//	int a;
//	for (int m = 0; m < 5; m++) {
//		for (int n = 0; n < 5; n++) {
//			scanf_s(" %d", &a);
//			if (a < 0) {
//				printf("entered a negetive number, enter a positive number: ");
//				n--;
//			}
//			else {
//				two_d[m][n] = a;
//			}
//		}
//		printf("\n");
//	}
//	int size = 5;
//	int r_value = kfour(two_d, size);
//	if (r_value > 0)
//		printf("four of %d exists in an array ", r_value);
//	else
//		printf("a four of k does not exist");
//}
//
//int kfour(int two_d[][5] ,int size) {
//	for (int g = 0; g < size - 1; g++) {
//		for (int f = 0; f < size - 1; f++) {
//			if (two_d[g][f] == two_d[g][f + 1] && two_d[g + 1][f] == two_d[g + 1][f + 1] && two_d[g][f] == two_d[g + 1][f]) {
//				return two_d[g][f];
//			}
//		}
//	}
//	return -1;
//}
