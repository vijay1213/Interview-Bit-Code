int Solution::solve(vector<int> &A, int B) {
    B = abs(B);
    sort(A.begin(), A.end());
   
    int i=0, j = 1;
   
    while(i<A.size() && j<A.size()) {
        if(j>i && A[j]-A[i]==B) return true;
        if(j<=i || A[j]-A[i]<B) j++;
        else i++;
       
    }
    return false;
}
int Solution::solve(vector<int> &A, int B) {
    map<int,int>m;
    for(auto it:A){
        m[it]++;
    }
    if(B==0){
        return A.size()==m.size()?0:1;
    }
    for(auto it:A){
        if(m.count(B+it))return 1;
    }
    return 0;
}
