#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
//constructor
Node(int d)
{
    this->data=d;
    this->next=NULL;
}
~Node(){
    int value =this->data;
    //memory free
    while(this->next!=NULL)
    {
        delete next;
        this->next=NULL;
    }cout<<"Memory is free for node with data "<<value<<endl;
}
};
//we can access the head and tail with only one pointer
void insertNode(Node *&tail,int element,int d)
{
    // list is empty
    if(tail==NULL)
    {
        Node *newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    //assuming the node is present in link list 
    else{
        Node *curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        //element found curr element is representing that element
        Node *temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;


    }
}
void deleteNode(Node *&tail,int element)
{
    //empty list 
    if(tail==NULL)
    {
        cout<<"List is empty "<<endl;
        return;
    }
    //delete the given element
    else{
        //assuming that the element given is present in the link list 
        Node *prev=tail;
        Node *curr=prev->next;
    
        while(curr->data!=element)
        { prev=curr;
         curr=curr->next;
        }
  
   
      prev->next=curr->next;
    if(curr==prev)
    {
        tail==NULL;
        return ;
    }
    else if(tail==curr)
      {
        tail=prev;
      }
      curr->next=NULL;
      delete curr;
    }

}
void print(Node *tail)
{
    
    if(tail==NULL)
    {
        cout<<"tail is empty "<<endl;
        return ;
    }
    Node *temp = tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail !=temp);
    {
      cout<<endl;
    }
}
bool isCircular(Node *tail)
{
    if(tail == NULL)
    {
        return true;
    }
   Node *temp=tail->next;
   while(temp!=NULL&&temp!=tail)
   {
    temp=temp->next;
   }
   if(temp==NULL)
   return false;
   if(temp==tail)
   return true;
}
bool loopPresent(Node *tail)
{
    if(tail==NULL)
    {
        return true;
    }
    Node *slow=tail;
    Node *fast=tail;
    while(fast->next!=NULL&&fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;

}
int main(){
Node *tail=NULL;
insertNode(tail,5,5);
insertNode(tail,5,6);
insertNode(tail,6,7);
insertNode(tail,7,8);
print(tail);
if(loopPresent(tail))
{
    cout<<"list is circular "<<endl;
}
else 
cout<<"you get scrued "<<endl;
// deleteNode(tail,5);
// print(tail);
return 0;

}