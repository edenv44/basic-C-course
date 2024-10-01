//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#define M 3
//#define N 4
//
//void weightedAverage(float sets[][N], float weights[], float res[]);
//
//void main() {
//	float sets[M][N];
//	float weights[N];
//	float res[M];
//	float g;
//	printf("please enter 12 decimal numbers\n");
//	for (int rows = 0; rows < 3; rows++) {
//		for (int amount = 0; amount < 4; amount++) {
//			scanf_s("%f", &g);
//			sets[rows][amount] = g;
//		}
//	}
//	printf("enter 4 weights:\n");
//	float w;
//	for (int weight = 0; weight < 4; weight++) {
//		scanf_s("%f", &w);
//		weights[weight] = w;
//	}
//	weightedAverage(sets, weights, res);
//	for (int z = 0; z < M; z++) {
//		printf("for the set of values at position %d is: %f\n", z, res[z]);
//	}
//}
//void weightedAverage(float sets[][N],float weights[],float res[]) {
//	printf("the weighted avareges are:\n");
//	float sum = 0;
//	for (int all = 0; all < N; all++) {
//		sum += weights[all];
//	}
//	for (int line = 0; line < M; line++) {
//		float x = 0;
//		for (int index = 0; index < N; index++) {
//			x += sets[line][index] * weights[index];
//		}
//		x /= sum;
//		res[line] = x;
//	}
//}