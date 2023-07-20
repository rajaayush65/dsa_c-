#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int queue_array[MAX];
int rear = -1;
int front = -1;

void insert(int data)
{
    if (rear == MAX - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == -1)
            front = 0;
        rear = rear + 1;
        queue_array[rear] = data;
    }
}
void delete ()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        front = front + 1;
    }
}
void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    display();
    delete ();
    //enque() insert
    //deque() delete
    display();
}
