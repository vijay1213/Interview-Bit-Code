int Solution::permuteStrings(string A, string B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    if(A.size() != B.size()) return 0;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i]==B[i]) {
            return 1;
        }
    }
    return 0;
}
int Solution::permuteStrings(string A, string B) {

    vector<int>freq(26,0);
    int n=A.size();
    if(n!=B.size())return 0;

    for(int i=0;i<n;i++)

    {
        if(A[i]!=B[i])
        {
            freq[A[i]-'a']+=1;
            freq[B[i]-'a']-=1;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)return 0;
    }
    return 1;
}
