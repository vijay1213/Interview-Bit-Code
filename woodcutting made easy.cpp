
   bool isWoodSufficient(vector < int > & A, int val, int B) {
  int rem = 0;
  int n = A.size();
  for (int i = 0; i < n; i++) {
    if (A[i] > val) rem += A[i] - val;
  }
  if (rem >= B) return true;
  return false;

}

int Solution::solve(vector<int> &A, int B) {
    int lo = 0;
    int hi = 1e6;
    int mid;
    while(hi - lo > 1) {
        mid = lo + (hi-lo)/2;
        if(isWoodSufficient(A,mid, B)) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }
    if(isWoodSufficient(A,hi, B)) {
        return hi;
    } else if(isWoodSufficient(A,lo, B)) {
        return lo;
    }
        return -1;
    
    
}
