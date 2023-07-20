#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void Insert(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}

void Print()
{
    struct Node *temp = head;
    printf("The List is: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void Reverse()
{
    if (head == NULL)
        return;
    stack<struct Node *> s;
    Node *temp = head;
    while (temp != NULL)
    {
        s.push(temp);
        temp = temp->next;
    }
    temp = s.top();
    head = temp;
    s.pop();
    while (!s.empty())
    {
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Insert(5);
    Insert(6);
    Insert(7);
    Insert(8);
    Print();
    Reverse();
    Print();
}