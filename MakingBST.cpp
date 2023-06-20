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
Node *insertIntoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
        return new Node(d);

    // when data is greater than the root
    if (d > root->data)
        root->right = insertIntoBST(root->right, d);
    else
        root->left = insertIntoBST(root->left, d);

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
Node *minVal(Node *&root)
{
    Node *temp=root;
    while(temp->left!=NULL)
    temp=temp->left;
    return temp;
}
Node *deleteFromBST(Node *&root,int val)
{
    if(root==NULL)
    return root;
    if(root->data==val)
    {
        //0 child
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //1 child


        //right child
        if(root->right!=NULL&&root->left==NULL)
        {   Node *temp=root->right;
              delete root;
              return temp;
        }
        //left child
         if(root->left!=NULL&&root->right==NULL)
        {   Node *temp=root->left;
              delete root;
              return temp;
        }
         //2 child 
          if(root->left!=NULL&&root->right!=NULL)
          {
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
          }

    }
    if(root->data>val)
    {root->left=deleteFromBST(root->left,val);
    return root;
    }
    else
   {
    root->right=deleteFromBST(root->right,val);
    return root;
   }

}
int main()
{
    Node *root = NULL;
    cout << "Enter the data in BST" << endl;
    takeInput(root);
    cout<<endl;
   // levelorderTraversal(root);
    cout<<endl;
    cout<<"Inorder trevrsal"<<endl;
    inorder(root);
    deleteFromBST(root,8);
    cout<<"After deletion"<<endl;
    inorder(root);
    return 0;
}
