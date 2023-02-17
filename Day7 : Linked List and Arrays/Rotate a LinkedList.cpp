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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
        return head;

        int count = 1;
        ListNode *p = head;
        while(p->next != NULL)
        {
            count++;
            p = p->next;
        }

        p->next = head;
        k = k%count;
        k = count - k;

        while(k--) p = p->next;

        head = p->next;
        p->next = NULL;
        return head;
    }
};
