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
        // Approach 1: Iterative
        // if (!head) return nullptr;
        // if (head->next == nullptr) return head;
        // ListNode* prev = nullptr;
        // ListNode* current = head;
        // ListNode* fw = current->next;

        // while (current != nullptr) {
        //     current->next = prev;
        //     prev = current;
        //     current = fw;
        //     fw = fw ? fw->next : nullptr;
        // }
        // return prev;

        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* reverseHead = reverseList(head->next);

        head->next->next = head;
        head->next = nullptr;

        return reverseHead;
    }
};