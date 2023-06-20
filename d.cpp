#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int data)
{
this->data=data;
this->next=NULL;
}
~Node()
{
    int value=this->data;
    if(this->next!=NULL)
    {
        delete next;
        this->next=NULL;
    }cout<<"Memory is free now"<<value<<endl;
}
};
void insertToHead(Node*&head,int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void Print(Node*&head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }cout<<endl;
}
void deleateNode(Node*&head,int position)
{
//for first position
    if(position==1){
     Node*temp=head;
     head=head->next;
     //memory free
     temp->next=NULL;
     delete temp;
    }
    //for other position 
    else
    {Node *curr=head;
    Node*prev=NULL;
    int cnt=1;
    while(cnt<=position)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
   }
    
}
int main(){
Node *node1=new Node(10);
Node *head=node1;
insertToHead(head,20);
insertToHead(head,30);
insertToHead(head,40);
Print(head);
cout<<head->data<<endl;
deleateNode(head,1);
Print(head);
return 0;
}