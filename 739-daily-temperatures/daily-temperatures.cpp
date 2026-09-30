class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>answer(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(st.empty()){
                st.push(i);
                answer[i]=st.top()-i;
            }
            else{
                answer[i]=st.top()-i;
                st.push(i);
                
            }
        }
        return answer;
    }
};