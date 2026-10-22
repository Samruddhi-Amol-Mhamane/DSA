class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>vec;
        stack<int>st;
        for(string ch:operations){
            if(ch=="C"){
                st.pop();
                vec.pop_back();
            }
            else if(ch=="D"){
                int n=st.top();
                st.push(n*2);
                vec.push_back(n*2);
            }
            else if(ch=="+"){
                int sum = vec[vec.size()-1] + vec[vec.size()-2];
                st.push(sum);
                vec.push_back(sum);
            }
            else{
                st.push(stoi(ch));
                vec.push_back(stoi(ch));
            }
        }
        int score=0;
        for(int i:vec){
            score=score+i;
        }
        return score;
    }
};