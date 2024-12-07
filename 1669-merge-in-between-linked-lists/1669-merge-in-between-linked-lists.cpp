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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* current = head;
        int c=0;
        while(c!=a){
            ListNode* cur = new ListNode(list1->val);
            current -> next = cur;
            current = cur;
            list1 = list1->next;
            c++;
        }
        c--;
        while(c!=b){
            list1 = list1->next ; 
            c++;
        }
        while(list2!=nullptr){
            ListNode* cur = new ListNode(list2->val);
            current -> next = cur;
            current = cur;
            list2 = list2->next;
        }
        while(list1!=nullptr){
            ListNode* cur = new ListNode(list1->val);
            current -> next = cur;
            current = cur;
            list1 = list1->next;
        }
        return head->next;
        
    }
};