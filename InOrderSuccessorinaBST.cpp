#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* FindMin(struct Node* root){
    if(root==NULL) return NULL;
    while(root->left!=NULL)
    root=root->left;
    return root;
}

struct Node* GetSuccessor(struct Node* root,int data){
    struct Node* current = Find(root,data);
    if(current==NULL) return NULL;
    if(current->right !=NULL){
        return FindMin(current->right);
    } else {
        struct Node* successor = NULL;
        struct Node* ancestor = root;
        while(ancestor != current){
            if(current->data < ancestor->data){
                successor = ancestor;
                ancestor = ancestor->left;
            } else
            ancestor = ancestor->right;
        }
        return successor;
    }
}