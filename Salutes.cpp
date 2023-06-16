long Solution::countSalutes(string A) {
    long ans=0;
    long s=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]=='>') s++;
        else{
            ans+=s;
        }
    }
    return ans;
}
