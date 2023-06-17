#include<stdio.h>
#include<ctype.h>
char stk[50];
int top = -1;
int check(char ch) {
    if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/' )
        return 2;
    else if(ch == '^')
        return 3;
    else
        return 0;
} 
void push(char ch) {
    stk[++top] = ch;
}
char pop() {
    if(top == -1)
        return -1;
    else
        return stk[top--];
}
int main() {
    char exp[50];
    scanf("%s",exp);
    char c, *e = exp;
    while(*e != '\0') {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')') {
            while((c = pop()) != '(')
                printf("%c", c);
        }
        else {
            while(check(stk[top]) > check(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1) {
        printf("%c",pop());
    }
    return 0;
}