#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

bool isSubTreeLesser(struct Node *root, int value)
{
    if (root == NULL)
        return true;
    if (root->data <= value && isSubTreeLesser(root->left, value) && isSubTreeLesser(root->right, value))
        return true;
    else
        return false;
}
bool isSubTreeGreater(struct Node *root, int value){
    if (root == NULL)
        return true;
    if (root->data > value && isSubTreeGreater(root->left, value) && isSubTreeGreater(root->right, value))
        return true;
    else
        return false;
}

bool isBinarySearchTree(Node *root)
{
    if (isSubTreeLesser(root->left, root->data) && isSubTreeGreater(root->right, root->data) && isBinarySearchTree(root->left) && isBinarySearchTree(root->right))
        return true;
    else
        return false;
}