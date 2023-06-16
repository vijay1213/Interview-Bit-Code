int Solution::lengthOfLastWord(const string s) {
  
        int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;// here we skip the spaces 
        while (tail >= 0 && s[tail] != ' ') {// if there are not spaces we get the last element 
            len++; // here find the length of last word
            tail--;
        }
        return len;
}
