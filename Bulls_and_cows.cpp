string Solution::solve(string A, string B) {
   
    int count1=0;
    int count2=0;
    vector<int> bull;
    vector<int> cow;
    for(int i=0;i<A.length();i++){
        if(A[i]==B[i]){
            count2++;
        }
    }
   
    for(int i=0;i<A.length();i++){
        bull.push_back(A[i]);
        cow.push_back(B[i]);
    }
    sort(bull.begin(),bull.end());
    sort(cow.begin(),cow.end());
   
    int n=bull.size();
    int i=0;
    int j=0;
    while(i<n && j<n){
        if(bull[i]==cow[j]){
            count1++;
            i++;
            j++;
        }
        else if(bull[i]>cow[j]){
            j++;
        }
        else if(bull[i]<cow[j]){
            i++;
        }
    }
   
   
    return to_string(count2)+'A'+ to_string(count1-count2)+'B';
}
string Solution::solve(string A, string B) {
    vector<int>freq(10,0);
    int n=A.size();
    int bulls=0,cows=0;
    for(int i=0;i<n;i++)
    {
           if(B[i]==A[i])
            {
                bulls++;
            }
            else freq[A[i]-'0']+=1;
    }
for(int i=0;i<n;i++)
{
if(A[i]==B[i] || freq[B[i]-'0']<=0)continue;
else
{    
        freq[B[i]-'0']-=1;
        cows++; 
}

}

return to_string(bulls)+“A”+to_string(cows)+“B”;





}
