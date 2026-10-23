class Solution {
public:
    int minLength(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(st.size()>0 && s[i]=='B' && st.top()=='A'){
                st.pop();
            }
            else if(st.size()>0 && s[i]=='D' && st.top()=='C'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        int count=0;
        while(!st.empty()){
            count++;
            st.pop();
        }

        return count;
    }
};