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
#include <iostream>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* container = new ListNode();
        ListNode* answer = container;
        
        int add_to_next = 0;
        while(l1 != NULL || l2 != NULL || add_to_next)
        {
            int result = 0;
            if(l1 != NULL)
            {
                result += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL)
            {
                result += l2->val;
                l2 = l2->next;
            }
            result += add_to_next;
            
            add_to_next = result / 10;
            
            ListNode* node = new ListNode(result % 10);
            container->next = node;
            container = container->next;
        }
        return answer->next;
    }
};