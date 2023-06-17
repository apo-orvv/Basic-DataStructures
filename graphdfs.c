#include<stdio.h>
#include<stdlib.h>

int visited[10] = {0,0,0,0,0,0,0,0,0,0};

int G [10][10] = {
    {0,1,1,1,0,0,0,0,0,0},
    {1,0,1,0,0,0,0,0,0,0},
    {1,1,0,0,0,0,0,0,0,0},
    {1,0,0,0,1,0,1,0,0,0},
    {0,0,0,1,0,1,0,1,0,0},
    {0,0,0,0,1,0,1,1,1,0}, 
    {0,0,0,1,0,1,0,0,1,0}, 
    {0,0,0,0,1,1,0,0,0,0},
    {0,0,0,0,0,1,1,0,0,1},
    {0,0,0,0,0,0,0,0,1,0},
}; 

char nodes[10]={'A','B','C','D','E','F','G','H','I','J'};

void DFS(int i){
    printf("%c ", nodes[i]); visited[i] = 1;
    for (int j = 0; j < 10; j++) {
        if(G[i][j]==1 && !visited[j]) { DFS(j); }
    }
}

void main(){ 
    printf("DFS Traversal: "); DFS(0); 
}