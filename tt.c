#include <stdio.h>
int rc(char s[],int i) {
    if (s[i]!='#' && (2*i+1<=strlen(s)))
        return 2*i+1;
    return -1;
}
int lc(char s[],int i) {
    if (s[i]!='#' && 2*i<=strlen(s))
        return 2*i;
    return -1;
}
void preorder(char s[],int i) {
    if (i>0 && s[i]!='#'){
        printf("%c",s[i]);
        preorder(s,lc(s, i));
        preorder(s,rc(s,i));
    }
}
void postorder(char s[], int i){
    if (i > 0 && s[i]!='#'){
        postorder(s, lc(s, i));
        postorder(s, rc(s,i));
        printf("%c", s[i]);
    }
}
void inorder(char s[], int i){
    if (i > 0 && s[i]!='#'){
        inorder(s, lc(s, i));
        printf("%c", s[i]);
        inorder(s, rc(s,i));
    }
}

void main(){
    char a[15];
    scanf("%s", a);
    preorder(a, 1);
    printf("\n");
    inorder(a, 1);
    printf("\n");
    postorder(a,1);
}