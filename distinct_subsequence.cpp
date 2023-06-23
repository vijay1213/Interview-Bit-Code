Distinct_subsequence.cpp
class Solution {
public:
    int numDistinct(string s1, string s2) {
         // Write your code here.
         int n = s1.size();
         int m = s2.size();
    
    vector<vector<double>> dp(n+1,vector<double>(m+1,0));
    
    for(int i=0;i<n+1;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<m+1;i++){
        dp[0][i]=0;
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            
            if(s1[i-1]==s2[j-1])
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    
    return (int)dp[n][m];
        
    }
};

int subsequenceCounting(string &s1, string &s2, int n, int m) {
    // Write your code here.
    
    vector<int> prev(m+1,0);
    
    prev[0]=1;
    
    for(int i=1;i<n+1;i++){
        for(int j=m;j>=1;j--){ // Reverse direction
            
            if(s1[i-1]==s2[j-1])
                prev[j] = (prev[j-1] + prev[j])%prime;
            else
                prev[j] = prev[j]; //can omit this statemwnt
        }
    }
    
    
    return prev[m];
} 
