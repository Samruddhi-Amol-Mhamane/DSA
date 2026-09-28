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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>st;
       
        ListNode* temp=head;
        vector<int>vec;
        int i=0;
        while(temp != NULL){
            vec.push_back(temp->val);
            temp=temp->next;
            i++;
        }

        vector<int>ans(vec.size(), 0);

        for(int i=vec.size()-1;i>=0;i--){
            while(st.size()>0 && vec[st.top()]<=vec[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=0;
                st.push(i);
            }
            else{
                ans[i]=vec[st.top()];
                st.push(i);
            }
            

        }
        return ans;
    }
    
};