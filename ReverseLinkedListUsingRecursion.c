#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *Reverse(struct Node *head)
{
    if (head->next == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    struct Node *q = Reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return q;
}

struct Node *Insert(struct Node *head, int data)
{
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if (head == NULL)
    {
        head = temp1;
        return head;
    }
    struct Node *temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    return head;
}

void Print(struct Node *head)
{
    printf("The List is: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    head = Insert(head, 1);
    head = Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);
    head = Insert(head, 5);
    Print(head);
    head = Reverse(head);
    Print(head);
}