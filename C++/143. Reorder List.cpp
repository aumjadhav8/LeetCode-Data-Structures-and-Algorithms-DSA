//143. Reorder List

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
    void reorderList(ListNode* head) {
        ListNode* temp = head;

        vector<int> vals;

        // Step 1: Store all node values in a vector
        while(temp){
            vals.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;

        int n = vals.size();
        int i = 0;
        int j = n - 1;
        
        // Step 2: Reorder values in the vector
        while(i < j) {
            temp->val = vals[i];
            temp = temp->next;
            i++;

            temp->val = vals[j];
            temp = temp->next;
            j--;
        }
        
        // If the list length is odd, handle the middle element
        if (i == j) {
            temp->val = vals[i];
        }
    }
};
