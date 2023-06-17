#include <stdio.h>

int factorial(int num) {
	return (num == 1 || num == 0) ? 1 : num * factorial(num - 1);
}

void main() {
    int n;
	printf("Enter the number whose factorial is to be computed : ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
}