#include<iostream>


struct Node {
    int data;
    struct Node* next;
    struct Node* pre;
};


void addFirst(struct Node *&head, int val) {
    Node *add = new Node;
    Node *tmp = new Node;

    // store head to tmp
    tmp = head;
    add->data = val;
    add->pre = NULL;

    if (head == NULL) {
        head = add;
    }
    else {
        add->next = tmp;
        head = add;
    }
}


void print(Node *&head) {
    // add reverse traversal ...
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
}


int main()
{
    Node *head = new Node;
    head = NULL;

    addFirst(head, 4);
    addFirst(head, 5);
    addFirst(head, 6);
    addFirst(head, 7);

    print(head);
    // output is 7<->6<->5<->4<->null
}
