#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left,*right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int maximumElement(struct Node* node) {
    int root_value,left,right,MAX=0;
    if (node == NULL) {
        return MAX;
    }
    root_value = node->data;
    left = maximumElement(node->left);
    right = maximumElement(node->right);
    if(left>right) {
        MAX = left;
    } else {
        MAX = right;
    }
    if(root_value > MAX) {
        MAX = root_value;
    }
    return MAX; 
}

int main () {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(20);
    root->left->right = new Node(13);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    cout << maximumElement(root);
    return 0;
}
