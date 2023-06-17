#include <stdio.h>
void counter(int *a,int *b,int n) { 
    int c;
    for(int i=0; i<n; i++) {
        c=1;
        if(a[i]!=-1) {
		    for(int j=i+1; j<n; j++) {
        	    if(a[i]==a[j]){
			        c++;
			        a[j]=-1;
		        }
	        }
	        b[i]=c;
		}  
    }
}
void display(int *a,int *b,int n) { 
    for(int i=0; i<n; i++) {
        if(a[i]!=-1) {
            printf("The frequency of the number %d is %d\n",a[i],b[i]);
        }  
    }	
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n],freq[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    counter(arr,freq,n);
	display(arr,freq,n);   
	return 0;
}