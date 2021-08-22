#include<iostream>


struct Node {
    int data;
    struct Node* next;
};


void del(struct Node *&head, int val) {

    if (head == NULL) {
        std::cout << "list is empty\n";
        return;
    }

    // if data in head node
    if (head->data == val) {
        head = head->next;
        return;
    }

    // copy head to a temp pinter
    // because we don't want modify main head
    Node *tmp = new Node;
    tmp = head;


    while (tmp->next != NULL && tmp->next->data != val)
        tmp = tmp->next;

    if (tmp->next == NULL) {
        std::cout << "not found a key\n";
    }
    else {
        Node *del = tmp->next;
        tmp->next = tmp->next->next;
        delete del;
    }
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

    del(head, 3);

    append(head, 2);
    append(head, 6);
    append(head, 7);
    append(head, 20);

    del(head, 7);
    del(head, 34);

    print(head);

    // output is:
    // list is empty
    // not found a key
    // 2->6->20->null
}
