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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int countA=0,countB=0;

        while(tempA != NULL){
            tempA=tempA->next;
            countA++;
        }
        while(tempB != NULL){
            tempB=tempB->next;
            countB++;
        }

        int moveA=0,moveB=0;
        tempA=headA;
        tempB=headB;

        if(countA <= countB){
            moveB=countB-countA;
        }
        for(int i=0;i<moveB;i++){
            tempB=tempB->next;
        }

        if(countA > countB){
            moveA=countA-countB;
        }
        for(int i=0;i<moveA;i++){
            tempA=tempA->next;
        }

        while(tempA != tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }
};