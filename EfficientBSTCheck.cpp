#include <iostream>
using namespace std;
#define INT_MAX 10e7
#define INT_MIN -10e7

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
bool isSubTreeGreater(struct Node *root, int value)
{
    if (root == NULL)
        return true;
    if (root->data > value && isSubTreeGreater(root->left, value) && isSubTreeGreater(root->right, value))
        return true;
    else
        return false;
}

bool isBstUtil(Node *root, int minValue, int maxValue)
{
    if (root->data > minValue && root->data < maxValue && isBinarySearchTree(root->left, minValue, root->data) && isBinarySearchTree(root->right, root->data, maxValue))
        return true;
    else
        return false;
}

bool isBinarySearchTree(Node* root){
    return isBstUtil(root,INT_MIN,INT_MAX);
}