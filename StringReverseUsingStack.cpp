#include <iostream>
#include <string.h>
using namespace std;

class Stack
{
private:
    char A[101];
    int top;

public:
    void Push(int x);
    void Pop();
    int Top();
    bool isEmpty();
};

void Reverse(char C[], int n)
{
    Stack s;
}

int main()
{
    char C[51];
    printf("Enter a String");
    gets(C);
    Reverse(C, strlen(C));
    printf("Output = %s", C);
}