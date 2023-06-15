string Solution::solve(string a, int B) {
    int count=1;
    string ans;
    int i;
 
    string s="";
    s+=a[0];
    for( i=1;i<a.size();i++){
        if(a[i-1] == a[i]){
            s+=a[i];
            count++;
            // cout<<s<<endl;
        }
        else{
            if(count != B){
                ans+=s;
            }
            s=a[i];
            count=1;
        }
    }
     if(count != B){
                 ans+=s;
            }
    return ans;
}
