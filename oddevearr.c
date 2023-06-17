#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=0,l=0;
    int o[n/2],e[n/2];
    for (int i=1;i<=n;i++){
        if (i%2==0)
            e[k++]=a[i-1];
        else
            o[l++]=a[i-1];
    }
    for (int i=0;i<l+1;i++){
        int temp;
        int m=i;
        int mm=i;
        for (int j=i+1;j<1;j++){
            if (o[m]>o[j])
                m=j;
            if (e[mm]<e[j])
                mm=j;
        }
        temp=o[i];
        o[i]=o[m];
        o[m]=temp;
        temp=e[i];
        e[i]=e[mm];
        e[mm]=temp;
    }    
    k=0;
    l=0;
    for (int i=1;i<=n;i++){
        if (i%2==0)
            printf("%d ", e[k++]);
        else
            printf("%d ", o[l++]);
    }
    return 0;
}