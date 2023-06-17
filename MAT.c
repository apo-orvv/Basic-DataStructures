//Write a program in C to print the nodes of the Binary Tree T level by level. You need to print the level number followed the nodes present in the level. 
//The level of the root node is 0. Use array data structures for implementing the Binary tree. Ensure the running time of the program as O(n)
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char tree[n];
    char str[]="";
    scanf("%s",&tree);
    // printf("%d-%c",0,tree[0]);
    int count=1;
    int length=n;
    for (int i=0;i<n;i++){
        if (tree[i]=='#'){
            continue;
        }
        else{
            for(i=0;tree[i]!='\0';i++){
                for(int j=0;str[j]!='\0';j++) {  
                    tree[i]=str[j];  
                    i++;  
                }  
            tree[i]='\0';
            }
        }
    printf("%s",str);
    return 0;
    }
}

// #include <stdio.h>
// #include <math.h>
// void lvlbylvl(char bt[],int n){
//     int counter=0;
//     for (int i=0;i<=sqrt(n);i++){
//         printf("%d-",i);
//         for (int j=1;j<=pow(2,i);j++){
//             if (bt[counter]!='#'){
//                 printf("%c",bt[counter]);
//             }
//             counter++;
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     char tree[n];
//     scanf("%s",&tree);
//     lvlbylvl(tree,n);
//     return 0;
// }