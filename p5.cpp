/*
Binary tree implementations
*/
#include<iostream>
using namespace std;
class Binarytree
{
    class Node
    {   public:

        int data;
        Node* left;
        Node* right;



        Node(int d)
        {
            data=d;
            left=nullptr;
            right=nullptr;
        }
    };
    public:
        Node* root;
        Binarytree(int d)
        {
            root=new Node(d);
        }
    void insertLeft(Node* r,int v)
    {
        Node* nN=new Node(v);
        r->left=nN;
    }
    void insertRight(Node* r,int v)
    {
        Node* nN=new Node(v);
        r->right=nN;
    }
    void preOrder(Node* root)
    {
        if(root!=nullptr)
        {
            cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    void inOrder(Node* root)
    {
        if(root!=nullptr)
        {
            inOrder(root->left);
            cout<<root->data<<" ";
            inOrder(root->right);
        }
    }
    void postOrder(Node* root)
    {
        if(root!=nullptr)
        {
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data<<" ";
        }
    }
};
int main()
{
    Binarytree tree(10);
    tree.insertLeft(tree.root,5);
    tree.insertRight(tree.root,15);
    tree.insertLeft(tree.root->left,3);
    tree.insertRight(tree.root->left,8);
    tree.insertLeft(tree.root->right,12);
    cout<<"\nPreOrder:";
    tree.preOrder(tree.root);
    cout<<"\ninOrder:";
     tree.inOrder(tree.root);
    cout<<"\nPostOrder:";
    tree.postOrder(tree.root);
}
