class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string ans="";
        for(char ch:s){
            if(st.size()>0 && st.top().first==ch){
                st.top().second++;
            }
            else{
                st.push({ch,1});
            }

            if(st.top().second==k){
                st.pop();
            }
        }

        while(!st.empty()){
            while(st.top().second != 0){
                ans.push_back(st.top().first);
                st.top().second--;
            }
            
            st.pop();
        }

        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};