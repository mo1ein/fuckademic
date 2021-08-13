#include<iostream>


struct Node {
    int data;
    struct Node* next;
};


void delFirst(struct Node *&head) {

    if (head == NULL) {
        std::cout << "list is empty\n";
        return;
    }

    // shift head to right
    head = head->next;
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


/*
void print(struct Node *head) {
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
}
*/


int main() {

    Node *head = new Node;
    head = NULL;

    delFirst(head);

    append(head, 2);
    append(head, 6);
    append(head, 7);
    append(head, 20);

    delFirst(head);
    delFirst(head);

    // output is:
    // list is empty
    // 7->20->null
}
