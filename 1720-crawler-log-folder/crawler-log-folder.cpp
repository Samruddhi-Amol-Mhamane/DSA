class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(string ch:logs){
            if(st.size()>0 && ch=="../"){
                st.pop();
            }
            else if(st.size()==0 && ch=="../"){

            }
            else if(ch=="./"){

            }
            else{
                st.push(ch);
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