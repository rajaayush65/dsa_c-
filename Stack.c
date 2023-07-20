#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Error: Stack Overflow\n");
        return;
    }
    A[++top] = x;
}

void Pop()
{
    if (top == -1)
    {
        printf("Error: No Element To Pop\n");
        return;
    }
    top--;
}

void isEmpty()
{
    if (top == -1)
    {
        printf("Stack is Empty");
        return;
    }
    else
    {
        printf("Stack is Not Empty");
        return;
    }
}

int Top()
{
    return A[top];
}

void Print()
{
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    Push(2);
    Push(5);
    Push(10);
    Print();
    Pop();
    Print();
    Push(12);
    Print();
}