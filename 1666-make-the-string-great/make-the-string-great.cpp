class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string good="";
        int n=s.size()-1;
        for(int i=n;i>=0;i--){
            if(st.size()>0 && (st.top()-s[i]==32 || s[i]-st.top()==32)){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            good.push_back(st.top());
            st.pop();
        }

        return good;
    }
};