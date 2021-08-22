#include<iostream>


struct Node {
    int data;
    struct Node* next;
    struct Node* pre;
};


void Del(struct Node *&head, int val) {

    if (head == NULL) {
        std::cout << "list is empty!\n";
        return;
    }

    Node *tmp = new Node;
    tmp = head;

    if (head->data == val) {
        head = head->next;
        delete tmp;
        if (head != NULL)
            head->pre = NULL;
        return;
    }

    while (tmp->next != NULL && tmp->next->data != val)
        tmp = tmp->next;

    if (tmp->next == NULL) {
        std::cout << "not found a key\n";
    }
    else {
        Node *del = tmp->next;
        tmp->next = tmp->next->next;

        if (tmp->next != NULL)
            tmp->next->pre = tmp;

        delete del;
    }
}


void Append(struct Node *&head, int val) {

    Node *tmp = new Node;
    Node *add = new Node;

    tmp = head;
    add->next = NULL;
    add->data = val;

    if (head == NULL) {
        add->pre = NULL;
        head = add;
        return;
    }

    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = add;
    add->pre = tmp;
}


void Print(struct Node *&head) {
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
}


int main()
{
    struct Node *head = new Node;
    head = NULL;

    Del(head,9);

    Append(head, 4);
    Append(head, 6);
    Append(head, 7);
    Append(head, 9);

    Del(head,9);
    Del(head,4);
    Del(head,1);

    Print(head);

    // output is :
    // list is empty!
    // not found a key
    // null<->6<->7<->null
}
