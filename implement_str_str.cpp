int Solution::strStr(const string s1, const string s2) {
    int n=s1.size(),m=s2.size();
    if(n==0 || m==0)return -1;
    int i=0,j=0,k=0;
    string temp;
    while(j<n and k<m){
        if(s2[k]==s1[j]){
            temp+=s1[j];
            if(temp==s2)return i;
            j++;
            k++;
        }
        else{
            i++;
            j=i;
            k=0; 
            temp="";
        }
    }
    return -1;
}
