#include<stdio.h>

int main() {
	int j = 4567;
	int hund = (j % 1000) / 100;
	hund = hund * 1000;
	int thous = j / 1000;
	thous = thous * 100;
	int ten = (j % 100) / 10;
	int ones = (j % 10) * 10;
	int updated = hund + thous + ten + ones;
	printf("the original number is %d - after mixing near digits %d", j, updated);
	return 0;
}