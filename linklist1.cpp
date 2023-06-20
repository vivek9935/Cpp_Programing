#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
//constructor
Node(int data)
{
    this->data=data;
    this->next=NULL;
}
// ~Node()
// {
//     int value=this->data;
//     if(this->next!=NULL)
//     {
//         delete next;
//         this->next=NULL;
//     }cout<<"Memory is free now"<<value<<endl;
// }
};
// bool isCircular(Node *tail)
// {
//     if(tail == NULL)
//     {
//         return true;
//     }
//    Node *temp=tail->next;
//    while(temp!=NULL&&temp!=tail)
//    {
//     temp=temp->next;
//    }
//    if(temp==NULL)
//    return false;
//    if(temp==tail)
//    return true;
// }
void insertionAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    cout << head << endl;
    head = temp;
}
void insertionAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
void removeDuplicates(Node *&head)
{
    if(head==NULL)
    {
        return ;
    }
     Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->next!=NULL&&curr->data==curr->next->next->data)
        {
            Node *next_next=curr->next->next;
            Node *del=curr->next;
            delete (del);
            curr->next=next_next;
        }
        else
        curr=curr->next;

    }

}
int getSize(Node *head)
{
 Node *temp=head;
 int  count =1;
 while(temp!=NULL)
{
    temp=temp->next;
    count++;
}
return count;
}
void sorting(Node *head){
        Node* cur1 = head;
        Node* cur2 = head;

       for (int i = 0; i < getSize(head); i++) {
        for (int j = 0; j < getSize(head) - 1; j++) {
            if (cur1->data < cur2->data) {
                int temp = cur1->data;
                cur1->data = cur2->data;
                cur2->data = temp;

            }
            cur2 = cur2->next;
        }
         cur2 = head;
         cur1 = head->next;
         for (int k = 0; k < i; k++) {
                cur1 = cur1->next;
         }
    }
}
int main(){
    Node *obj1=new Node(10);
    Node *tail=obj1;
    Node *head=obj1;
    insertionAtTail(tail,20);
    insertionAtTail(tail,30);
    insertionAtHead(head,10);
    Print(head);
    sorting(head);
     removeDuplicates(head);
       Print(head);
// if(isCircular(tail))
// {
//     cout<<"list is circular "<<endl;
// }
// else 
// cout<<"you get scrued "<<endl;

}