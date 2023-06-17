#include <stdio.h>
#define MAXSIZE 5

typedef struct stackrecord {
    int top;
    int stk[MAXSIZE];
}STACK;
STACK s; 

void push () {
    int num;
    if (s.top == (MAXSIZE - 1)) {
        printf ("Stack is Full\n");
    }
    else {
        printf ("Enter the element to be pushed: ");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
}

void pop () {
    int num;
    if (s.top == - 1) {
        printf ("Stack is Empty\n");
    }
    else {
        num = s.stk[s.top];
        printf ("Popped element is %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
}

void topelement(){
	printf("Element on the top of the stack is %d\n",s.stk[s.top]);
}

void display () {
    if (s.top == -1) {
        printf ("Stack is empty\n");
    }
    else {
        printf ("\nElements of the stack are: \n");
        for (int i = s.top; i >= 0; i--) {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}

void main () {
    int choice;
    s.top = -1;
    printf ("STACK OPERATIONS USING ARRAY\n");
    while (1) {
        printf ("----------------------------\n");
        printf ("       1-->PUSH             \n");
        printf ("       2-->POP              \n");
        printf ("       3-->TOP ELEMENT      \n");
        printf ("       4-->DISPLAY          \n");
		printf ("       5-->EXIT             \n");
        printf ("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            topelement();
            break;
		case 4:
            display();
			break;
        case 5:
            return;
        }
    }
}

