#include<iostream>


struct Node {
    int data;
    struct Node* next;
    struct Node* pre;
};


void DelFirst(struct Node *&head) {

    if (head != NULL) {
        Node *tmp = new Node;
        tmp = head;
        head = head->next;
        delete tmp;

        if(head != NULL)
            head->pre = NULL;
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

    DelFirst(head);
    Append(head, 4);
    Append(head, 6);
    Append(head, 7);
    Append(head, 9);

    DelFirst(head);
    DelFirst(head);

    Print(head);

    // output is :
    // haed is null
    // 7<->9<->null
}
