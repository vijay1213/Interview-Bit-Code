int isPossible(vector < int > & A, int pages, int students) {
  int cnt = 0;
  int sumAllocated = 0;
  for (int i = 0; i < A.size(); i++) {
    if (sumAllocated + A[i] > pages) {
      cnt++;
      sumAllocated = A[i];
      if (sumAllocated > pages) return false;
    } else {
      sumAllocated += A[i];
    }
  }
  if (cnt < students) return true;
  return false;
}

int Solution::books(vector<int> &A, int B) {
    int lo = A[0];
    int hi = 0;
    if(B > A.size()) return -1;
    for(int i = 0; i < A.size(); i++) {
        hi += A[i];
        lo = min(lo, A[i]);
    }
    while(lo <= hi) {
        int mid = lo + (hi-lo)/2;
        
        if(isPossible(A, mid, B)) {
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
    return lo;
}

