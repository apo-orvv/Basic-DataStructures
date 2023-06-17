#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]); 
    }
    int ec=0,oc=0;
    int odd[n/2],even[n/2];
    for (int i=1;i<=n;i++){
        if (i%2==0)
        even[ec++]=arr[i-1];
        else
        odd[oc++]=arr[i-1];
    }
    for (int i=0;i<oc+1;i++){
        int key;
        int desc=i;
        int asc=i;
        for (int j=i+1;j<oc;j++){
            if (odd[desc]>odd[j])
            desc=j;
            if(even[asc]<even[j])
            asc=j;
        }
        key=odd[i];
        odd[i]=odd[desc];
        odd[desc]=key;
        key=even[i];
        even[i]=even[asc];
        even[asc]=key;
    }
    ec=0; oc=0;
    for (int i=1;i<=n;i++){
        if (i%2==0)
        printf("%d ",even[ec++]);
        else
        printf("%d ",odd[oc++]);
    }
    return 0;
}