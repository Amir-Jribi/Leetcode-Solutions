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
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> vis;
        ListNode* current = head;
        while(current!=nullptr){
            if (vis[current]){
                return true;
            }
            vis[current]=1;
            current = current->next;
        }
        return false;
    }
};