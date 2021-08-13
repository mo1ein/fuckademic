#include<iostream>


struct Node {
    int data;
    struct Node* next;
};


void append(struct Node *&head, int val) {
    Node *to_add = new Node;
    Node *last = new Node;

    last = head;
    to_add->data = val;

    if (head == NULL) {
        to_add->next = NULL;
        head = to_add;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = to_add;
    to_add->next = NULL;
}


/*
void print(struct Node *head)
{
    while (head != NULL)
    {
        std::cout << head->data << " ";
        head = head->next;
    }

}
*/


int main() {

    Node *head = new Node;
    head = NULL;

    append(head, 2);
    append(head, 6);

    // output is: 2->6->null
}
