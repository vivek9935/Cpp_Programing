#include <iostream>
#include <map>
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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free now" << value << endl;
    }
};
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
void Print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
void nodeToInsert(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertionAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertionAtTail(tail, d);
        return;
    }
    Node *nodeIoInsert = new Node(d);

    nodeIoInsert->next = temp->next;
    temp->next = nodeIoInsert;
}
void deleateNode(Node *&head, Node *&tail, int position)
{
    // for first position
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // for other position
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
bool isCircular(Node *tail)
{
    if (tail == NULL)
    {
        return true;
    }
    Node *temp = tail->next;
    while (temp != NULL && temp != tail)
    {
        temp = temp->next;
    }
    if (temp == NULL)
        return false;
    if (temp == tail)
        return true;
}
// Node* loopPresent(Node *tail)
// {
//     if(tail==NULL)
//     {
//         return NULL;
//     }
//     Node *slow=tail;
//     Node *fast=tail;
//     while(fast->next!=NULL&&fast!=NULL)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast)
//         {
//             return slow;
//         }
//     }
//     return NULL;

Node* loopPresent(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node *slow=head;
    Node *fast=head;
    while(slow!=NULL&&fast!=NULL)
    {
        fast=fast->next;
        while(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast)
        {
            return slow;
        }
    }
    return NULL;

}
// bool loopPresent(Node *tail)
// {
//     if (tail == NULL)
//     {
//         return true;
//     }
//     map<Node *, bool> visited;
//     Node *temp = tail;
//     while (temp != NULL)
//     {
//         if (visited[temp] == true)
//         {
//             cout<<"loop is present at "<<temp->next->data<<endl;
//             return true;
//         }
//         visited[temp] = true;
//         temp = temp->next;
//     }
//     return false;
// }
Node * detectfirstNode(Node *head)
{
Node *meet= loopPresent(head);
Node *start=head;
while(start!=meet)
{
    start=start->next;
    meet=meet->next;
}
return start;
}
void removeLoop(Node* head )
{
    if(head==NULL)
    return;
    Node *startingLoop=detectfirstNode(head);
    Node *temp=startingLoop;
    while(temp->next!=startingLoop)
    {
        temp=temp->next;
    }
    temp->next->next=NULL;
}
int main()
{
    Node *node1 = new Node(10);
    // cout<<node1<<endl;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node *head = node1;
    Node *tail = node1;
    // insertionAtHead(head,12);
    // insertionAtHead(head,15);
    // Print(head);
    insertionAtTail(tail, 12);
    insertionAtTail(tail, 15);
    cout << head->data << endl;
    cout << tail->data << endl;
    nodeToInsert(head, tail, 4, 66);
    Print(head);
    tail->next=head->next;
    Node *d =detectfirstNode(head);
    cout<<d->data<<endl;
    removeLoop(head);
    // deleateNode(head, tail, 4);
    Print(head);
    // cout << tail->data << endl;
}