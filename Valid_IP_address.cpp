bool isVlaid(string &A) {
    if(A.size() > 3) return false;
    
    if(A.front()=='0' && A.size() > 1) {
        return false;
        }
        int val = stoi(A);
        return val <= 255 && val >= 0;
}

vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> ans;
    for(int i = 1; i < A.size()&&i < 4; ++i) {
        string first = A.substr(0, i);
        if(isVlaid(first)) {
            for(int j = 1; j < 4 && i+j < A.size(); ++j) {
                string second = A.substr(i, j);
                if(isVlaid(second)) {
                    for(int k = 1; i+j+k < A.size()&& k < 4; ++k) {
                        string third = A.substr(i+j, k);
                        string four = A.substr(i+j+k);
                        if(isVlaid(third) && isVlaid(four)) {
                            ans.emplace_back(first + "." + second + "." + third + "." + four);
                        }
                    }
                }
            }
            
        }
    }
    return ans;
}
// bool isVlaid(string &A) {
//     if(A.size() > 3) return false;
    
//     if(A.front()=='0' && A.size() > 1) {
//         return false;
//         }
//         int val = stoi(A);
//         return val <= 255 && val >= 0;
// }

