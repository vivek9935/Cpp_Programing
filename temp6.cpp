#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(NULL) {}
    ~Node() {
        int value = data;
        while (next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node*& tail, int element, int d) {
    Node* curr = tail;
    do {
        if (curr == NULL || curr->data == element) {
            Node* temp = new Node(d);
            temp->next = curr->next;
            curr->next = temp;
            if (curr == NULL || curr == tail) tail = temp;
            break;
        }
        curr = curr->next;
    } while (curr != tail);
}

int main() {
    Node* tail = NULL;
    insertNode(tail, 5, 1);
    return 0;
}
