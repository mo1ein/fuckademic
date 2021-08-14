#include<iostream>


struct Node {
    int data;
    struct Node* next;
};


//add like this and pointers
// https://www.geeksforgeeks.org/insert-a-node-at-a-specific-position-in-a-linked-list/
void addWithPos(struct Node *&head, int pos, int val) {

    Node *cur = new Node;
    Node *pre = new Node;
    Node *add_to = new Node;

    // copy head to a temp pinter
    // because we don't want modify main head
    cur = head;
    pre = cur;

    add_to->data = val;

    int size;
    for (size = 0; cur != NULL; size++)
        cur = cur->next;

    cur = head;

    if (pos < 1 || pos > size + 1) {
        std::cout << "invalid pos!\n";
    }
    else {
        while (pos--) {
            if (pos == 0) {
                if (pre == cur)
                {
                    add_to->next = head;
                    head = add_to;
                }
                else
                {
                    pre->next = add_to;
                    add_to->next = cur;
                }
            }
            else
            {
                pre = cur;
                cur = cur->next;
            }
        }
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

    addWithPos(head, 1, 4);

    append(head, 1);
    append(head, 2);
    append(head, 3);

    addWithPos(head, 1, 5);
    addWithPos(head, 2, 6);
    addWithPos(head, 7, 7);
    addWithPos(head, 10, 8);

    print(head);
    // output is:
    // invalid pos!
    // 5->6->4->1->2->3->7->null
}
