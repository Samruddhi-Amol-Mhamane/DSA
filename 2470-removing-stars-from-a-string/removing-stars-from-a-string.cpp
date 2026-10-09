class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string result="";
        for(char ch:s){
            st.push(ch);
            if(ch=='*'){
                st.pop();
                st.pop();
            }
        }

        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin() , result.end());
        return result;
        
    }
};