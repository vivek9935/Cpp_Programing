#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildTree(Node *root)
{
    cout << "Enter the data for node" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
        return NULL;
    cout << "Enter data for inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter data for inseting data on right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
//inorder 
void inorder(Node *root)
{
    //base case 
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}
//preorder
void preorder(Node *root)
{
    //base case 
    if(root==NULL)
    return;
    cout<<root->data<<"  ";
    inorder(root->left);
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    // call for creating a binary tree
    root = buildTree(root);
    cout<<"inorder is \n";
    inorder(root);
    preorder(root);
    return 0;
}