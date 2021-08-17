#include<iostream>


struct Node {
    int data;
    struct Node* next;
    struct Node* pre;
};


void append(struct Node *&head, int val) {
    Node *add = new Node;
    Node *tmp = new Node;

    tmp = head;
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


void print(Node *head) {
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
}


int main()
{
    Node *head = new Node;
    head = NULL;

    append(head, 4);
    append(head, 5);
    append(head, 6);
    append(head, 7);
    print(head);
    // output is 4<->5<->6<->7<->null
}
