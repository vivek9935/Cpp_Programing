#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->prev=NULL;

    }
};

void print(Node*&head)
{
Node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;

}cout<<endl;
}
int getLength(Node *head)
{   
    int len=0;
    Node *temp=head;
while(temp!=NULL)
{
     len++;
    temp=temp->next;

}
return len;
}
void insertNode(Node *&head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node *&tail,int d)
{
  Node *temp= new Node(d);
tail->next=temp;
temp->prev=tail;
tail=temp;
}
void insertToNode(Node *&head,Node*&tail,int position ,int d)
{
    if(position==1){
        insertNode(head,d);
        return;
    }
    Node *temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
//inserting at last position
if(temp->next==NULL)
{
    insertAtTail(tail,d);
    return;
}
//creating a node 
Node *nodeTOInsert=new Node(d);
//inserting the node at the postion
nodeTOInsert->next=temp->next;
temp->next->prev=nodeTOInsert;
temp->next=nodeTOInsert;
nodeTOInsert->prev=temp;
    
}
int main()
{
Node *node1=new Node(10);
Node *head=node1;
Node *tail=node1;
int d=getLength(head);
cout<<d<<endl;
insertNode(head,20);
insertNode(head,30);
insertAtTail(tail,40);
print(head);
cout<<tail->data<<endl;
insertAtTail(tail,60);
print(head);
cout<<  "the head is  "<<head->data<<endl;
cout<<"the tail is   "<<tail->data<<endl;
insertToNode(head,tail,6,100);
print(head);
}