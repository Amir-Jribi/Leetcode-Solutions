/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int> vis;
        map<ListNode*,int>idx;
        ListNode* current = head;
        int c=0;
        while(current!=nullptr){
            if (vis[current]){
                return current;
            }
            vis[current] = true;
            current = current -> next;
        }
        return nullptr;
    }
};