#include <stdio.h>
void main() {
    int n;
    printf("Enter order of the matrix:");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter the matrix elements :\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Elements of Left Lower Triangular Matrix: ");
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            printf("%d ",mat[i][j]);
        }
    }
    printf("\nElements of Right Lower Triangular Matrix: ");
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>n-i-1;j--) {
            printf("%d ",mat[i][j]);
        }
    }
}