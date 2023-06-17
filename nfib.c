#include<stdio.h>

int fibseries(int n) {
   return ((n<=1) ? n : fibseries(n-1) + fibseries(n-2));
} 

void main() {
   int n;
   printf("Enter the value of n, to compute the nth fibonacci number: ");
   scanf("%d", &n);
   printf("%d ", fibseries(n)); 
}