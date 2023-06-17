#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++){
        int key=arr[i+1];
        int pt=i;
        while(pt>=0 && arr[pt]>key){
            arr[pt+1]=arr[pt];
            pt-=1;
        }
        arr[pt+1]=key;
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}