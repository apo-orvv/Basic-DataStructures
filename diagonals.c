#include <stdio.h>
void main() {
    int n;
    printf("Enter order of the matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter the matrix elements :\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nDiagonal Elements:\n");
    for(int i=0; i<n; i++) {
        printf("%d %d",mat[i][i],mat[i][n-i-1]);
        printf("\n");
    }
}