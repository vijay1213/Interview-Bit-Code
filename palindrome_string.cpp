int Solution::isPalindrome(string A) {
    
    int i = 0;
    int j = A.size()-1;
    while(i < j) {
        while(!isalnum(A[i]) && i < j) {
            i++;
        }
        while(!isalnum(A[j]) && i < j) {
            j--;
        }
        if(tolower(A[i++]) != tolower(A[j--])) {
            return false;
        }
    }
    return true;
}
