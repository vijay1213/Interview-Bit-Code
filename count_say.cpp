
string Solution::countAndSay(int A) {
    int i,j,s1,count=1;
    string str1="1",str2="";
    if(A==1)    // Base Case
        return str1;
    for(i=2;i<=A;i++) {
        count=1;j=0;
        s1=str1.length();
        while(j<s1) {
            // Keeping count of the current character
            if(str1[j]==str1[j+1]) {
                count++;
                j++;
            }
            else {
                // Append the count and current character
                str2 += to_string(count);
                str2 += str1[j];
                j++;
                count=1;
            }
        }
        // Store the current result.
        str1=str2;
        str2="";
    }
    // Return result
    return str1;
}
