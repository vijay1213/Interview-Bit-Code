class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.length();
        
        for(int i = 0, j = n-1; i < j; i++, j--) {
            while(isalnum(s[i])==false && i < j) i++;
            while(isalnum(s[j])==false && i < j) j--;
            
            if(toupper(s[i])!=toupper(s[j])) {
                return false;
            }
        }
        return true;
    }
};
