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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* current = head;
        while(list1!=nullptr || list2!=nullptr){
            int x = (list1!=nullptr)? list1->val : 200;
            int y = (list2!=nullptr)? list2->val : 200;
            if (list1!=nullptr && list1->val==min(x,y)){
                ListNode* cur = new ListNode(min(x,y));
                current -> next = cur;
                current = cur;
                list1 = list1->next;
            }
            else {
                ListNode* cur = new ListNode(min(x,y));
                current -> next = cur;
                current = cur;
                list2 = list2->next;
            }
        }
        return head->next;
    }
};