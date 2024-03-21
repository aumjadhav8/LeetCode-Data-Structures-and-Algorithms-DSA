//206. Reverse Linked List

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
        vector<int> vals;

        ListNode* temp = head;
        while(temp){
            vals.push_back(temp->val);
            temp = temp->next;
        }

        int n = vals.size();
        temp = head;

        while(temp && n){
            temp->val = vals[n-1];
            n--;
            temp=temp->next;
        }
        temp=head;
        return temp;
    }
};