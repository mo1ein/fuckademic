#include<iostream>


struct Node {
    int data;
    struct Node* next;
};


void append(struct Node *&head, int val) {

    Node *to_add = new Node;
    to_add->data = val;

    if (head == NULL) {
        to_add->next = NULL;
        head = to_add;
        return;
    }

    while (head->next != NULL)
        head = head->next;

    head->next = to_add;
    to_add->next = NULL;
}


int main() {

    Node *head = new Node;
    head = NULL;

    append(head, 2);
    append(head, 6);

    // output is: 2->6->null
}
