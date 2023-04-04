int Solution::maxSubArray(const vector<int> &A) {
    
    int n = A.size();
    int current_sum = A[0];
    int max_sum = A[0];
    for(int i = 1; i < n; i++) {
        current_sum = max(current_sum+A[i], A[i]);
        max_sum = max(max_sum, current_sum);
        
    }
    return max_sum;
}
// the above code is the kadane's algorithims 
// it is used to find out the maximum subarray sum;
