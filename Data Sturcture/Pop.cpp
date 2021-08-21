#include<iostream>


struct Node {
    int data;
    struct Node* next;
};


void pop(struct Node *&head) {

    // copy head to a temp pinter
    // because we don't want modify main head
    Node *tmp = new Node;
    tmp = head;

    if (head == NULL)
        return;

    if (head->next == NULL) {
        head = NULL;
        return;
    }

    while (tmp->next->next != NULL)
        tmp = head->next;

    delete tmp->next;
    tmp->next = NULL;
}


void append(struct Node *&head, int val) {

    Node *to_add = new Node;
    Node *tmp = new Node;

    // copy head to a temp pinter
    // because we don't want modify main head
    tmp = head;

    to_add->data = val;

    if (head == NULL) {
        to_add->next = NULL;
        head = to_add;
        return;
    }

    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = to_add;
    to_add->next = NULL;
}


void print(struct Node *head) {
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
}


int main() {

    Node *head = new Node;
    head = NULL;

    append(head, 2);
    append(head, 6);
    append(head, 5);

    pop(head);

    print(head);
    // output is: 2->6->null
}
