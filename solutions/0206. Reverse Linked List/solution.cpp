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
    ListNode* reverseList(ListNode* head) {
        if( head == nullptr ) return head;
        stack<int> s;
        while(head){
            s.push(head->val);
            head = head->next;
        }
        ListNode* newhead = new ListNode(s.top());
        s.pop();
        ListNode* temp = newhead;
        while(!s.empty()){
            temp -> next = new ListNode(s.top());
            temp = temp -> next;
            s.pop();
        }
        return newhead;
    }
};
