class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};