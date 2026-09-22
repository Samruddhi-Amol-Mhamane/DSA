class Solution {
public:
    bool is_vowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int st=0;
        int end=s.length() - 1;
        while(st<end){
            if(!is_vowel(s[st])){
                st++;
            }
            if(!is_vowel(s[end])){
                end--;
            }
            if(is_vowel(s[st]) && is_vowel(s[end])){
                swap(s[st],s[end]);
                st++;
                end--;
            }
        }
        return s;
        
    }
};