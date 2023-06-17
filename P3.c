//(x1-x2)(x2+x3)+(x2-x3)(x3+x4)+...
#include <stdio.h>
void main(){
    int n,sum=0;
    printf("Enter the total number of terms: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the terms: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-2;i++){
        sum+=(arr[i]-arr[i+1])*(arr[i+1]+arr[i+2]);
    }
    printf("Result = %d",sum);
}