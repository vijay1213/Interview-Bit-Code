bool Solution::hotel(vector<int> &arrive, vector<int> &departure, int K) {
int n = arrive.size();
sort(arrive.begin(), arrive.end());
sort(departure.begin(), departure.end());
int i=0, j=0;
stack<int> st;
while(i<n)
{
if (departure[j] < arrive[i]) {
st.pop();
j++;
} else {
if (st.size() >= K) return 0;
st.push(arrive[i]);
i++;
}
}
return 1;
}
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    int k = K;
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    
    int x;
    for(int i=0,j=0;i<arrive.size() && j<depart.size();i++)
    {
        x = arrive[i];
         k--;
        while(j<depart.size())
        {
            if(depart[j]<=x)
            {
                k++;
                j++;
            }
            else 
            break;
        }
        
       
        
        if(k<0)
        return 0;
    }
    
    return 1;
}

