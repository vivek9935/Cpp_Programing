#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *getMid(Node *head)
   {
       Node *slow=head;
       Node *fast=head->next;
       while(fast!=NULL&&fast->next!=NULL)
       {
           fast=fast->next->next;
           slow=slow->next;
       }
       return slow;
   }
   Node *reverse(Node *head)
   {
       Node *curr=head;
       Node *prev=NULL;
       Node *next=NULL;
     while(curr!=NULL)
     {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     return prev;
   }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {  if(head->next==NULL)
        {
            return true;
        }
        Node *middle=getMid(head);
        Node *temp=middle->next;
        middle->next=reverse(temp);
        //compare
        Node *head1=head;
        Node *head2=middle->next;
        while(head2!=NULL)
        {
            if(head1->data!=head2->data)
            return false;
            
            head1=head1->next;
            head2=head2->next;
            
        }
        return true;
    
    }
int main()
{
     Node *node1 = new Node(10);
     Node *head=node1;
     head->next->data=20;
     head->next->next->data=30;
     bool a=isPalindrome(head);
     cout<<a;
     return 0;

}
