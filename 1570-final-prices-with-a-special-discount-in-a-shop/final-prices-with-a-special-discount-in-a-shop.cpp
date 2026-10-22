class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        vector<int>vec(prices.size());
        int n=prices.size()-1;
        for(int i=n;i>=0;i--){
            while(st.size()>0 && st.top()>prices[i]){
                st.pop();
            }
            if(st.empty()){
                vec[i]=prices[i];
            }
            else{
                vec[i]=prices[i]-st.top();
            }
            st.push(prices[i]);
        }
        return vec;
    }
};