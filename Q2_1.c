#include<stdio.h>

int main() {
	int n = 435;
	float avg;
	int sum;
	sum = (n % 10) + ((n % 100) / 10) + (n / 100);
	avg = (sum/3);
	printf("the number is %d, the sum of his digits is %d and the average is %f\n", n, sum, avg);
	return 0;
}