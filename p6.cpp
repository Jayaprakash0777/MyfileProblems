/*
BST
*/
#include<iostream>
using namespace std;

class BinarySearchTree {
    class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d) {
            data = d;
            left = nullptr;
            right = nullptr;
        }
    };

public:
    Node* root;

    BinarySearchTree(int d) {
        root = new Node(d);
    }

    void preOrder(Node* root) {
        if (root != nullptr) {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }

    void inOrder(Node* root) {
        if (root != nullptr) {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
    }

    void postOrder(Node* root) {
        if (root != nullptr) {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
    }

    void insert(int val) {
        root = insertt(root, val);
    }

    Node* insertt(Node* root, int val) {
        if (root == nullptr)
            return new Node(val);
        
        if (val < root->data)
            root->left = insertt(root->left, val);
        else
            root->right = insertt(root->right, val);
        
        return root;
    }
};

int main() {
    BinarySearchTree tree(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(8);
    tree.insert(12);
    
    cout << "\nPreOrder: ";
    tree.preOrder(tree.root);
    
    cout << "\nInOrder: ";
    tree.inOrder(tree.root);
    
    cout << "\nPostOrder: ";
    tree.postOrder(tree.root);

    return 0;
}
