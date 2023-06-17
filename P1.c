//(x1+x2)x3+(x2+x3)x4+(x3+x4)x5+...
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
        sum+=(arr[i+2]*(arr[i]+arr[i+1]));
    }
    printf("Result = %d",sum);
}