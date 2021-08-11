#include<iostream>


struct Node {
    int data;
    struct Node* next;
};


void addFirst(struct Node *&head, int val) {
    Node *to_add = new Node;
    to_add->data = val;
    to_add->next = head;
    head = to_add;
}


int main() {

    Node *head = new Node;
    head = NULL;

    addFirst(head, 2);
    addFirst(head, 6);

    // output is: 6->2->null
}
