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
void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}
void buildFromLevelOrder(Node *&root)
{
queue<Node *>q;
cout<<"Enter the data for root"<<endl;
int data;
cin>>data;
root=new Node(data);
q.push(root);
while(!q.empty())
{
Node *temp=q.front();
q.pop();
cout<<"Enter left node for "<<temp->data<<endl;
int leftData;
cin>>leftData;         
if(leftData!=-1)
{
    temp->left=new Node(leftData);
    q.push(temp->left);
}
cout<<"Enter right node for "<<temp->right<<endl;
int rightData;
cin>>rightData;
if(rightData!=-1)
{
    temp->right=new Node(rightData);
    q.push(temp->right);
}

}
}
int main()
{

    Node *root = NULL;
    // call for creating a binary tree
    //root = buildTree(root);
    buildFromLevelOrder(root);
    levelorderTraversal(root);
    return 0;
}