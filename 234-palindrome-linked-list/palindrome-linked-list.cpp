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
    ListNode* reverseLL(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* findMidOfLL(ListNode* head){
        ListNode  *slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* firsthalf = head;
        ListNode* secondhalf= reverseLL(findMidOfLL(head));
        ListNode* t1 = firsthalf;
        ListNode* t2 = secondhalf;

        while(t2 && t1){
            if(t1->val != t2->val) return false;
            t1 = t1->next ;
            t2 = t2->next;
        }

        return true;

    //     vector<int> v;
    //     ListNode* cur = head;
    //     while(cur){
    //         v.push_back(cur->val);
    //         cur = cur->next;
    //     }

    //     int low = 0;
    //     int high = v.size()-1;

    //     while(low < high){
    //         if(v[low] != v[high]){
    //             return false;
    //         }
    //         low++;
    //         high--;
    //     }
    //     return true;
    }
};