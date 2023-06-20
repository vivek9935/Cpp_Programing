#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node* next;
Node(int d)
{
    this->data=d;
    this->next=NULL;
}
};
void Nodeinsert(Node*&head,int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void Print(Node *head)
{
Node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<"  ";
    temp=temp->next;
}cout<<endl;
}
/*
1. First, reach the K-th node from the starting node of the given linked list.
2.Save the K-th node in fin pointer.
3. remove the kth node and point towards the head
4. now fin pointer is act as head and same thing will solve  */
void Print1(Node *head)
{
    Node *temp = head;
    do {
        cout << temp->data << "  ";
        temp = temp->next;
    } while(temp != head);
    cout << endl;
}
void Circular(Node *head,int k)
{ 
    //base case 
    if(head==NULL)
    return ;
    //solve the first case
    Node *curr=head;
    Node *find=NULL;
    int count=0;
    while(curr!=NULL&&count<k)
    {
        curr=curr->next;
        count++;
    }
     find=curr->next;
    curr->next=head;
    head = find; // update head to point to the new head node

    Circular(head,k);
        Print1(head);
     
}
int main()
{
Node *obj=new Node(10);
Node *head=obj;
Nodeinsert(head,20);
Nodeinsert(head,30);
Nodeinsert(head,40);
Nodeinsert(head,50);
Circular(head,3);
//Print(head);

}