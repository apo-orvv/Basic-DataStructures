#include <stdio.h>

int power(int base, int exp) {
    return (exp != 0 ? base * power(base, exp-1) : 1);
}

void main() {
    int a,n;
	printf("Enter the values of a & n: ");
    scanf("%d %d", &a, &n);
    printf("Value of %d^%d is %d", a, n, power(a, n));
}