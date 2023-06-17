#include <stdio.h>
int eve(int n){//function definition
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
    int n,temp;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        temp=arr[i];
        if (eve(temp) && eve(arr[i+1])){
            printf("%d is the least position such that x(i) and x(i+1) are both even!",i+1);
            break;
        }
    }
}