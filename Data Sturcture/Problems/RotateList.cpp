
struct ListNode {
    int val;
    ListNode* next;
};


//error for compile but true in leetcode
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode *tmp = new ListNode;
        tmp = head;
        int size = 1;

        while (tmp->next != NULL) {
             tmp = tmp->next;
            ++size;
        }

        tmp->next = head;
        tmp = head;

        k %= size;
        size -= k;
        size--;

        while (size--)
            tmp = tmp->next;

        head = tmp->next;
        tmp->next = NULL;

        return head;
    }
};
