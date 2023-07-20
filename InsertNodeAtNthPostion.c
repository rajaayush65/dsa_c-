#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void Insert(struct Node **head, int data, int n)
{
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = *head;
        *head = temp1;
        return;
    }
    struct Node *temp2 = *head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2->next = temp1;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
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
    int n;
    printf("How Many Number To Put in Linked List?\n");
    scanf("%d", &n);
    int i, data, pos;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Data = ");
        scanf("%d", &data);
        printf("\nEnter Postion = ");
        scanf("%d", &pos);
        Insert(&head, data, pos);
        Print(head);
    }
    // Insert(&head, 2, 1);
    // Insert(&head, 3, 2);
    // Insert(&head, 4, 1);
    // Insert(&head, 5, 2);
    // Insert(&head, 4, 1);
    // Print(head);
}