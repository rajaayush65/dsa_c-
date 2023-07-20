#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void Print(struct Node *p)
{
    if (p == NULL)
    {
        return;
    }
    printf("%d ", p->data);
    Print(p->next);
}

void ReversePrint(struct Node *p)
{
    if (p == NULL)
    {
        return;
    }
    ReversePrint(p->next);
    printf("%d ", p->data);
}

void Insert(struct Node **head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (*head != NULL)
        temp->next = *head;
    *head = temp;
}

int main()
{
    struct Node *head = NULL;
    Insert(&head, 1);
    Insert(&head, 2);
    Insert(&head, 3);
    Insert(&head, 4);
    Insert(&head, 5);
    Print(head);
    printf("\n");
    ReversePrint(head);
}