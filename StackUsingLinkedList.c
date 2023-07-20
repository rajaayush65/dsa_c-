#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *link;
};
struct Node *top = NULL;

void Push(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
    temp->data = x;
    temp->link = top;
    top = temp;
}

void Pop()
{
    struct Node *temp;
    if (top == NULL)
        return;
    temp = top;
    top = top->link;
    free(temp);
}

int main(){
    Push(5);
    Push(6);
    Push(7);
    printf("%d ",top->data);
    Pop();
    printf("%d ",top->data);
}