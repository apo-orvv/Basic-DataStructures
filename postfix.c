#include<stdio.h>
#include<ctype.h>
#include<math.h>
int stack[50];
int top = -1;
void push(int x) {
    stack[++top] = x;
}
int pop() {
    return stack[top--];
}
int main() {
    char exp[50];
    int n1,n2,n3,n;
    scanf("%s",exp);
    char *e = exp;
    while(*e != '\0') {
        if(isdigit(*e)) {
            n = *e - 48;
            push(n);
        }
        else {
            n1 = pop();
            n2 = pop();
            switch(*e) {
            case '+':
                n3 = n1 + n2;
                break;
            case '-':
                n3 = n2 - n1;
                break;
            case '*':
                n3 = n1 * n2;
                break;
            case '/':
                n3 = n2 / n1;
                break;
            case '^':
                n3=1;
                while(n1!=0){
                    n3*=n2;
                    --n1;
                }
                break;
            }
            push(n3);
        }
        e++;
    }
    printf("%d",pop());
    return 0;
}

