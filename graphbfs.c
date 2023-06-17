#include<stdio.h>
#include<stdlib.h>

struct queue { int size,f,r; int* arr; };

int isEmpty(struct queue *q) {
    if(q->r==q->f) { return 1; }
    return 0;
} 

int isFull(struct queue *q) {
    if(q->r==q->size-1) { return 1; }
    return 0;
}

void enqueue(struct queue *q, int val) {
    if(isFull(q)) { printf("Queue is full!\n"); }
    else { q->r++; q->arr[q->r] = val; }
}

int dequeue(struct queue *q) {
    int x = -1;
    if(isEmpty(q)) { printf("Queue is empty!\n"); }
    else { q->f++; x = q->arr[q->f]; }
    return x;
}

void main(){
    struct queue q; 
    q.size = 100; 
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    int node, i=0;
    int visited[10] = {0,0,0,0,0,0,0,0,0,0};
    int g [10][10] = {
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
    printf("BFS Traversal: ");
    printf("%c ", nodes[i]);
    visited[i] = 1; 
    enqueue(&q, i);
    while (!isEmpty(&q)) {
        int node = dequeue(&q);
        for (int j = 0; j < 10; j++) {
            if(g[node][j] ==1 && visited[j] == 0) {
                printf("%c ", nodes[j]);
                visited[j] = 1; 
                enqueue(&q, j);
            }
        }
    }
}