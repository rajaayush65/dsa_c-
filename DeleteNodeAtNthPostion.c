#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void Insert(struct Node **head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (*head != NULL)
        temp->next = *head;
    *head = temp;
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

void Delete(struct Node **head, int n)
{
    struct Node *temp1 = *head;
    if (n == 1)
    {
        *head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

int main()
{
    struct Node *head = NULL;
    Insert(&head, 2);
    Insert(&head, 4);
    Insert(&head, 6);
    Insert(&head, 5);
    Print(head);
    int n;
    printf("Enter A Position=");
    scanf("%d", &n);
    Delete(&head, n);
    Print(head);
}