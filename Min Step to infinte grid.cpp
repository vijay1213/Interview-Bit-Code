int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    
    int n = A.size();
    int ans = 0;
    for(int i = 0; i < n-1; i++) {
        if(abs(A[i] - A[i+1]) <= abs(B[i] - B[i+1])) {
            ans += abs(B[i] - B[i+1]);
        } else {
            ans += abs(A[i] - A[i+1]);
        }
    }
   return ans;
}
// we just need to calculate the distance between the (A-C) and (B-D);
// int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    // int steps = 0;
    // for (int i = 0; i < A.size() - 1; i++){
    //     int x1 = A[i]; 
    //     int y1 = B[i];
    //     int x2 = A[i+1];
    //     int y2 = B[i+1];
    //     steps += max(abs(x2 - x1), abs(y2 - y1));
    // }
    // return steps;
    // }
    // the above code explain in the simply way


