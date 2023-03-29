vector<int> Solution::findOccurences(vector<int> &A) {
    
    int n = A.size();
    map<int, int> mp; // creating the map which will store the elements in the sorted order
    vector<int> ans; // to return the final array as answer
    for(int i = 0; i < n; i++) { 
        mp[A[i]]++; // here we are storing the elements in the map
    }
    for(auto it: mp) {
        ans.push_back(it.second);// storing the elements of the map in the ans vector 
    }
    return ans;// returning the ans vector as final array
}
