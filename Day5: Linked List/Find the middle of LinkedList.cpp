/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(!head->next)
        return head;

        ListNode *p = head;
        ListNode *q = head;

        while(p && p->next)
        {
            p = p->next->next;
            q = q->next;
        }
        return q;
    }
};
