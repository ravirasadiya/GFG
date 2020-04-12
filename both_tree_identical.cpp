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

bool identical(struct Node* node1,struct Node* node2) {
    if(node1 == NULL && node2 == NULL) {
        return 1;
    }

    if(node1 != NULL && node2 != NULL) {
        return(
            node1->data == node2->data &&
            identical(node1->left,node2->left) && identical(node1->right,node2->right)
        );
    }
    return 0;
}

int main () {
    struct Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(20);
    root1->left->right = new Node(13);
    root1->right->left = new Node(4);
    root1->right->right = new Node(5);

    struct Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(20);
    root2->left->right = new Node(12);
    root2->right->left = new Node(4);
    root2->right->right = new Node(5);
    cout << identical(root1,root2);
    return 0;
}
