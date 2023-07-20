#include <stdlib.h>
#include <stdio.h>
//Linked List: Inserting a Node At Beginning

struct Node
{
    int data;
    struct Node *next;
};

//struct Node* head; //Global Variable,Can be Accessed AnyWhere

void Insert(struct Node **head, int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (*head != NULL)
        temp->next = *head;
    *head = temp;
}

void Print(struct Node *head)
{
    printf("The List is : \n");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL; //Empty List;
    printf("How many numbers?\n");
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(&head, x);
        Print(head);
    }
}

