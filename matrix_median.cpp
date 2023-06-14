

#include<bits/stdc++.h>

/* O(N*M)

int Solution::findMedian(vector<vector<int> > &A) {

    

    vector<int>ans;

    for(int i=0;i<A.size();i++){

        for(int j=0;j<A[i].size();j++){

            ans.push_back(A[i][j]);

        }

    }


    sort(ans.begin(),ans.end());


    int n=ans.size();

    if(n==0) return 0;

    if(n%2==0) return (ans[n/2]+ans[(n/2)-1])/2;


    return ans[n/2];

}

*/


// Using Binary Search - Very easy problem 

// Time complexity  : O(log(max-min))*O(log(M))



// O(log(M)), where M is no. of columns in each row

// It is like Simple Binary search for finding the target element i.e 'x'


int countElementsLessThanMid(vector<int>&v, int x)

{

    int lo=0, hi=v.size()-1;

    int cnt=0;

    while(lo<=hi)  

    {

        int mid=lo+(hi-lo)/2; 

        if(v[mid] < x){        // Checking for next highest element

            cnt = (mid+1); // 0th-based indexing

            lo=mid+1;

        }   

        else

            hi=mid-1;

    }

    return cnt;

}



// This is Binary search on search space of length = (max-min)

// So it takes O(log(max-min)) 


int Solution::findMedian(vector<vector<int>> &A)

{

    int n=A.size(),m=A[0].size();

    // int lo=1;

    // int hi=1e9;

    

    // find min or max element in a matrix using first or last elements of each row respectively.

    int lo = INT_MAX, hi = INT_MIN;

    for(int i=0;i<n;i++){

        lo = min(lo, A[i][0]);

        hi = max(hi, A[i][m-1]);

    }

    

    int ans;

    while(lo<=hi)

    {

        int mid=lo+(hi-lo)/2;

        int count=0;

        // Every single row is sorted SO make use of that via Binary search

        for(int i=0;i<n;i++)

            count += countElementsLessThanMid(A[i], mid);

            

        if(count<=(n*m/2)){

            ans=mid;

            lo=mid+1;

        }

        else

            hi=mid-1;

    }

    return ans;        

}

