#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool IsPalindrom(char d[], int r, int i, int e);  // signiture for assist function.

int main() {
    char a;
    printf("Enter nested parentheses:\n");
    int z = 0, x = 0, c = 0, v = 0, b = 0, n = 0, q = 0, i = 0;  // different parentheses counters.
    char d[30];
    int hmp = 0;  // how many palindromes?
    int e = 0;    // marks the end of palindrome to prepare for next one.
    int r = 0;    // marks the beginning of palindrome to prepare for next one.
    bool s;

    do {
        scanf("%c", &a);  // recieve character by character for check.

        if (a == '(' || a == '{' || a == '[') {
            if (q != 0) {
                r = i;  // update the starting point for the next potential palindrome
                e = q;  // update the end point for the current palindrome
            }
        }

        if (a == ')' || a == '}' || a == ']') {
            if (q != 0) {
                s = IsPalindrom(d, r, i, e);  // call palindrome check function.
                if (!s) {
                    printf("false");
                    return false;
                }
                ++hmp;
            }
        }

        if (a == '(')
            ++z;
        if (a == ')')
            ++x;
        if (a == '{')
            ++c;
        if (a == '}')
            ++v;
        if (a == '[')
            ++b;
        if (a == ']')
            ++n;

        if (a != '(' && a != '{' && a != '[' && a != ')' && a != '}' && a != ']') {
            d[q] = a;  // add character to list for futur palindrome check.
            ++q;  // count how many character have been added.
        }

        if (x > z || v > c || n > b) {  // check that there aren't more closing parentheses than opening ones.
            printf("false");
            return false;
        }
    } while (a != '\n');

    if (z == x && c == v && b == n) {  // compare parentheses counters to make sure they are equal.
        printf("true");
        return true;
    }
    else {
        printf("false");
        return false;
    }
}

bool IsPalindrom(char d[], int r, int i, int e) {
    if (e - r == 2)  // if list contains only 2 characters then list is not a palindrome.
        return false;
    for (; i < (r + e) / 2; i++) {
        if (d[i] != d[e - 1 - i]) {
            return false;
        }
    }
    return true;
}