class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        if(n==1){
            return 1;
        }
        int count=0;
        for(int i=n-1;i>=0;i--){
            while(i>=0 && s[i]==' '){
                i--;
            }
            while(i>=0 && s[i] != ' '){
                count++;
                i--;
            }
            return count;
        }
        return count;
    }
};