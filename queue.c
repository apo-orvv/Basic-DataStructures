#include<stdio.h>
#define MAXLEN 6
struct queue{
    int f;
    int r;
    int* arr[MAXLEN];
};
 
void enqueue(struct queue *q){
    int num;
    if(q->r==MAXLEN-1){
        printf("Queue is Full\n");
    }
    else{
        printf("Enter the element to be enqueued: ");
        scanf("%d",&num);
        q->arr[q->r] = num;
        q->r++;
    }
}
 
void dequeue(struct queue *q){
    if(q->f==q->r){
        printf("Queue is Empty\n");
    }
    else{
        // q->f++;
        printf("Dequeued Element: %d\n",q->arr[q->f++]); 
    }
}
 
void front(struct queue *q){
    printf("Element at the front of the Queue: %d\n",q->arr[q->f]);
}

void display(struct queue *q){
    if(q->f==q->r){
        printf("Queue is Empty\n");
    }
    else{
        for (int i=q->f;i<q->r;i++){
            printf("%d\n",q->arr[i]);
        }
    }
}
void main(){
    struct queue q;
    q.f = q.r = 0;

    int choice;
    printf ("QUEUE OPERATIONS USING ARRAY\n");
    while (1) {
        printf ("----------------------------\n");
        printf ("       1-->ENQUEUE          \n");
        printf ("       2-->DEQUQUE          \n");
        printf ("       3-->FRONT ELEMENT    \n");
        printf ("       4-->DISPLAY          \n");
		    printf ("       5-->EXIT             \n");
        printf ("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            enqueue(&q);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            front(&q);
            break;
		case 4:
            display(&q);
			break;
        case 5:
            printf("EXIT POINT");
            return;
        }
    }
}
