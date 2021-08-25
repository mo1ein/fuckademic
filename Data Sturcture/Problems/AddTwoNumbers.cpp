struct ListNode {
    int val;
    ListNode* next;
};


//error for compile but true in leetcode
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tmp = new ListNode;
        ListNode *last = new ListNode;
        tmp = l1;
        last = tmp;
        int carry = 0;

        while (true) {
            int l1d, l2d, sum, data;

            if (l2 == NULL && tmp == NULL && carry == 0)
                break;

            (tmp == NULL) ?  l1d = 0 : l1d = tmp->val;
            (l2 == NULL) ? l2d = 0 : l2d = l2->val;

            sum = l1d + l2d + carry;
            data = sum % 10;
            carry = sum / 10;

            if (tmp == NULL) {
                ListNode *add= new ListNode;
                add->val = data;
                add->next = tmp;
                last->next = add;
                last = add;
            }
            else {
                tmp->val = data;
            }

            if (tmp != NULL) {
                last = tmp;
                tmp = tmp->next;
            }

            if (l2 != NULL)
                l2 = l2->next;
        }
        return l1;
    }
};
