#include<iostream>


struct Node {
    int data;
    struct Node* next;
    struct Node* pre;
};


void Pop(struct Node *&head) {

    if (head != NULL) {

        if (head->next == NULL) {
            head = head->next;
        }
        else {
            Node *tmp = new Node;
            tmp = head;

            while (tmp->next->next != NULL)
                tmp = tmp->next;

            delete tmp->next;
            tmp->next = NULL;
        }
    }
}


void Append(struct Node *&head, int val) {
    Node *tmp = new Node;
    Node *add = new Node;

    tmp = head;

    add->next = NULL;
    add->data = val;

    if (head == NULL)
    {
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
    while (head != NULL)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
}


int main()
{
    struct Node *head = new Node;
    head = NULL;

    Append(head, 4);
    Append(head, 6);
    Append(head, 1);

    Pop(head);

    Print(head);

    // output is :
    // 4<->6<->null
}
