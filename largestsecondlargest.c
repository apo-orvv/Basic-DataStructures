#include <stdio.h>
void  main(){
    int n;
    int l1=0;
    int l2=0;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++) {
        if (arr[i]>l1){
            l2=l1;
            l1=arr[i];
        }
        else if (arr[i]>l2) {
            l2=arr[i];
        }
    }
    printf("Largest and second largest numbers are %d and %d respectively.",l1,l2);
}