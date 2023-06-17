//(x1+x3)(x2+x4)(x3+x5)...
#include <stdio.h>
void main(){
    int n,prod=1;
    printf("Enter the total number of terms: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the terms: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-2;i++){
        prod*=(arr[i]+arr[i+2]);
    }
    printf("Result = %d",prod);
}