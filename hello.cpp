#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data) { 
        this->data = data;
        left = right = NULL;
    }
};

void preOrder(struct Node* node) {
    if(node == NULL)
        return;

    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void postOrder(struct Node* node) {
    if(node == NULL)
        return;

    
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

void inOrder(struct Node* node) {
    if(node == NULL)
        return;

    
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
    
}

int main () {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Pre order is :: ";
    preOrder(root);

    cout << "Post order is :: ";
    postOrder(root);

    cout << "Inorder is :: ";
    inOrder(root);
}