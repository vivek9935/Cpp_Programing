#include<iostream>
using namespace std;

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
void insertionAtHead(Node *&head,int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void reverseLinkedList(Node *head)
{
//    if(head == NULL|| head->next==NULL)
// {
//     cout<<head<<endl;
// }
 Node *prev=NULL;
 Node *curr=head;
 Node *forward=NULL;
 while(curr!=NULL)
 {
     forward = curr->next;
     curr->next=prev;
	 prev=curr;
     curr=forward;
 }
}
void Print(Node*&head){
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }cout<<endl;
}
int main()
{
    Node *node1=new Node(10);
    Node* head=node1;
    insertionAtHead(head,5);
    insertionAtHead(head,6);
    insertionAtHead(head,7);
Print(head);
reverseLinkedList(head);
Print(head);

}


