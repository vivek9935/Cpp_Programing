#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->prev = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertNode(Node *&head, Node *&tail, int d)
{
    if(head==NULL)
    {
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
}
void insertAtTail(Node *&tail, Node *&head, int d)
{
    if(tail==NULL)
    {
             Node*temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
}
void insertToNode(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertNode(head,tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail,head, d);
        return;
    }
    // creating a node
    Node *nodeTOInsert = new Node(d);
    // inserting the node at the postion
    nodeTOInsert->next = temp->next;
    temp->next->prev = nodeTOInsert;
    temp->next = nodeTOInsert;
    nodeTOInsert->prev = temp;
}
int main()
{
    // starting there is no node head is null and tail is null
    Node *head = NULL;
    Node *tail = NULL;
    int d = getLength(head);
    cout << d << endl;
    insertNode(head,tail, 20);
    insertNode(head,tail, 30);
    insertAtTail(tail,head, 40);
    print(head);
    cout << tail->data << endl;
    insertAtTail(tail, head,60);
    print(head);
    cout << "the head is  " << head->data << endl;
    cout << "the tail is   " << tail->data << endl;
    insertToNode(head, tail, 5, 100);
    print(head);
}