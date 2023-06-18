string Solution::convert(string A, int B) {
    if(B>=A.size()||B==1) return A;
    vector<string>v(B);
    int k=0,flag=0;
    // One thing for sure we know that we have to take only one character from each column,
    // So we can iterate it by rows and will take character one by one.
    for(int i=0;A[i];i++){
        v[k]+=A[i]; // Append the chosen character to its respective row.
        
        // The real problem here is that from the start the rows are getting incrmented by 1, 
        // and once it reached end, then it will gets decremented by 1, and so on.
        
        // To keep that in check we can use flag variable, that tells us to whether we should increment the row or not.
        if(k==B-1){ // If you reach the end, then start decrementing the row
            k--; flag=1;
        }
        else if(k==0){ // If you are at the start, then keep incrementing the row
            k++; flag=0;
        }
        else if(flag) k--; 
        else k++;
    }
    string ans=""; // now append the answer and return it.
    for(int i=0;i<B;i++){
        ans+=v[i];
    }
    return ans;
}
