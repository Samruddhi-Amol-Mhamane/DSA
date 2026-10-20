class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string sr="";
        for(char ch: s){
            if(st.size()>0 && st.top()==ch){
                st.pop();
            }else{
                st.push(ch);
            }
            
        }

        while(!st.empty()){
            sr.push_back(st.top());
            st.pop();
        }
        reverse(sr.begin(),sr.end());

        return sr;
    }
};