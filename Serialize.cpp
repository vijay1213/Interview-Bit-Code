string Solution::serialize(vector<string> &A) {
  string res="";
    for(int i=0;i<A.size();i++){
        res+=A[i];
        res+=to_string(A[i].size());// here we are calculate the lenght of each string in the array
        res+="~";
    }
    return res;

}
