#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node *next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;

    }
};
Node *reverse(Node *head)
{
   if(head==NULL||head->next==NULL)
   {
    return head;
   } 
   Node *chotahead=reverse(head->next);
   head->next->next=head;
   head->next=NULL;
   return chotahead;
}
void insertionAtHead(Node *&head,int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node *&head)
{
   Node *temp=head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }cout<<endl;
}
int main(){
Node *node1=new Node(10);
Node *head=node1;
insertionAtHead(head,20);
insertionAtHead(head,30);
print(head);
/*The reverse function returns a reversed linked list, 
but the returned list is not assigned to any variable 
in the main function. So, the original linked list remains 
unchanged, and the reversed list is not printed*/
head=reverse(head);
print(head);
return 0;
}