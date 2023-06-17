#include <stdio.h>
#include <string.h>
int lc(char bt[],int idx) {
    if (bt[idx]!='#' && (2*idx+1<strlen(bt))) {
        if (bt[2*idx+1]!='#') { return 2*idx+1; }
        else { return -1; }
    }
    else { return -1; }
}
int rc(char bt[],int idx) {
    if (bt[idx]!='#' && (2*idx+2<strlen(bt))) {
        if (bt[2*idx+2]!='#') { return 2*idx+2; }
        else { return -1; }
    }
    else { return -1; }
}
void preorder(char bt[],int idx) {
    if (idx>=0) {
        printf("%c",bt[idx]); preorder(bt,lc(bt,idx)); preorder(bt,rc(bt,idx));
    }
}
void inorder(char bt[], int idx) {
    if (idx>=0) {
        inorder(bt,lc(bt,idx)); printf("%c",bt[idx]); inorder(bt,rc(bt,idx));
    }
}
void postorder(char bt[], int idx){
    if (idx>=0) {
        postorder(bt,lc(bt,idx)); postorder(bt,rc(bt,idx)); printf("%c",bt[idx]);
    }
}
int main(){
    char tree[50]; scanf("%s",tree);
    printf("Inorder: "); inorder(tree, 0); printf("\n");
    printf("Preorder: "); preorder(tree, 0); printf("\n");
    printf("Postorder: "); postorder(tree,0);
    return 0;
}