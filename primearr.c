#include<stdio.h>
void main() {
    int n,check,temp=0;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    int arr[n],prime[n];
    printf("Enter the elements: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        check=0;
        for(int j=2;j<arr[i];j++) {
            if(arr[i]%j==0) {
                check=1;
                break;
            }
        }
        if(check==0) {
            prime[temp]=arr[i];
            temp++;
        }
    }
    printf("Prime Numbers in the array are: ");
    for(int i=0;i<temp;i++) {
        printf("%d ",prime[i]);
    }
}