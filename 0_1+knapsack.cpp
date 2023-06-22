

// plain recursion: TLE

int helper(vector<int> &v, vector<int> &wt, int w, int n){

    // base condn

    if(w==0 || n==0) return 0;

    

    // choices

    if(wt[n-1] <= w){

        return max(v[n-1]+helper(v, wt, w-wt[n-1], n-1), helper(v, wt, w, n-1));

    }else{

        return helper(v, wt, w, n-1);

    }

}

int Solution::solve(vector<int> &v, vector<int> &wt, int w) {

    int n = wt.size();

    return helper(v, wt, w, n);

}






// dp top-down approach: recursion+memo: Accepted: 142ms

int t[1001][1001];

int helper(vector<int> &v, vector<int> &wt, int w, int n){

    // base condn

    if(w==0 || n==0) return 0;

    

    // check the memo array for result

    if(t[n][w] != -1) return t[n][w];

    

    // choices
    int take = INT_MIN;
    if(wt[n-1] <= w)

         take = v[n-1]+helper(v, wt, w-wt[n-1], n-1);

    

        int not_take = helper(v, wt, w, n-1);
        
        return max(take, not_take);
}

int Solution::solve(vector<int> &v, vector<int> &wt, int w) {

    memset(t, -1, sizeof(t));

    

    int n = wt.size();

    return helper(v, wt, w, n);

}





// dp: down-top approach: Accepted: 110ms


int Solution::solve(vector<int> &v, vector<int> &wt, int w) {

    int m = wt.size(), n = w;

    int t[m+1][n+1];

    

    for(int i=0; i<=m; i++) t[i][0] = 0;

    for(int j=1; j<=n; j++) t[0][j] = 0;

    

    for(int i=1; i<=m; i++){

        for(int j=1; j<=n; j++){

            if(wt[i-1] <= j){

                t[i][j] = max(v[i-1]+t[i-1][j-wt[i-1]], t[i-1][j]);

            }else{

                t[i][j] = t[i-1][j];

            }

        }

    }

    return t[m][n];

    

}
