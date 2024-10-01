#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main()
{
	printf("enter two small letters:");
	char x, y;
	scanf_s(" %c %c", &x, &y);
	int sum = (x + y) - 120;

	printf("the letters are: %c, %c their gimatria value is: %d ", x, y, sum);
}