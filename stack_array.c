#include <stdio.h>
#define STACK_LENGTH 10
#define EMPTY (-1)
#define STACK_EMPTY (-1)

static int top = EMPTY;

int push(int *stack,int value)
{
    if (top >= STACK_LENGTH - 1){
        return -1;
    }

    stack[++top] = value;
    return 0;
}

int pop(int *stack)
{
    if (top == EMPTY){
        return STACK_EMPTY;
    }
    else{
        return stack[top--];
    }
}

//--------------------TEST------------------------

void main(void)
{
    int stack[STACK_LENGTH];

    push(stack,56);
    push(stack,23);
    push(stack,22);

    int i;
    while((i=pop(stack))!=STACK_EMPTY){
        printf("%d\r\n",i);
    }
}