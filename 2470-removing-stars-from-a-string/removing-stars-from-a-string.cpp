// class Solution {
// public:
//     string removeStars(string s) {
//         stack<char>st;
//         string result="";
//         for(char ch:s){
//             st.push(ch);
//             if(ch=='*'){
//                 st.pop();
//                 st.pop();
//             }
//         }

//         while(!st.empty()){
//             result.push_back(st.top());
//             st.pop();
//         }
//         reverse(result.begin() , result.end());
//         return result;
        
//     }
// };

class Solution {
public:
    string removeStars(string s) {
        string result = "";
        
        for (char ch : s) {
            if (ch == '*') {
                result.pop_back(); // String ke top character ko pop kar do
            } else {
                result.push_back(ch); // Character ko result string mein push kar do
            }
        }
        
        return result;
    }
};