#include<iostream>


struct Node {
    int data;
    struct Node* next;
    struct Node* pre;
};


// can write without last ptr like a comment in singley with pos
void addWithPos(struct Node *&head, int pos, int val) {

    Node *tmp = new Node;
    Node *last = new Node;
    Node *add_to = new Node;

    tmp = head;
    last = tmp;
    add_to->data = val;

    int size;
    for (size = 0; tmp != NULL; size++)
        tmp = tmp->next;

    tmp = head;

    if (pos < 1 || pos > size + 1) {
        std::cout << "invalid pos!\n";
    }
    else {
        while (pos--) {
            if (pos == 0) {

                // add_to first
                if (last == tmp) {
                    add_to->next = head;
                    add_to->pre = NULL;
                    head = add_to;
                }
                else {

                    // append
                    if (tmp == NULL) {
                        add_to->next = NULL;
                        add_to->pre = last;
                        last->next = add_to;
                    }

                    // between nodes
                    else {
                        add_to->next = tmp;
                        add_to->pre = last;
                        last->next = add_to;
                        tmp->pre = add_to;
                    }
                }
            }
            else {
                last = tmp;
                tmp = tmp->next;
            }
        }
    }
}


void append(struct Node *&head, int val) {

    Node *add_to = new Node;
    add_to->data = val;
    add_to->next = NULL;

    if (head == NULL) {
        add_to->pre = NULL;
        head = add_to;
        return;
    }

    Node *tmp = new Node;
    tmp = head;

    while (tmp->next != NULL)
        tmp = tmp->next;

    add_to->pre = tmp;
    tmp->next = add_to;
}


void print(struct Node *head) {
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
    append(head, 7);

    addWithPos(head, 1, 1);
    addWithPos(head, 2, 2);
    addWithPos(head, 3, 3);
    addWithPos(head, 7, 8);
    addWithPos(head, 9, 11);

    print(head);

    // output is:
    // invalid pos!
    // 1<->2<->3<->4<->5<->7<->8<->null
}
