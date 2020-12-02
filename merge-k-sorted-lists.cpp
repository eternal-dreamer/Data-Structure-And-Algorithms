/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* merge(ListNode*x, ListNode*y)
    {
        ListNode*head = new ListNode(0),*d;
        d= head;
        
        while(x and y)
        {
            if(x->val > y->val)
            {
                head->next = y;
                y = y->next;
            }
            else
            {
                head->next = x;
                x=x->next;
            }
             head = head->next;
                
        }
        head->next = x?x:y;
        return d->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n == 0)
            return NULL;
        if(n == 1)
            return lists[0];
        ListNode*head = new ListNode(INT_MIN);
        for (int i = 0; i < lists.size(); i++)
        {
            head = merge(head,lists[i]);
        }
        return head->next;
    }
};
