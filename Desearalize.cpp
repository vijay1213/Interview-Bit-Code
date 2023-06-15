vector<string> Solution::deserialize(string A) {
    vector<string> ans;
    string s;
    for (auto it:A) {
        if (isdigit(it) ) continue;
        else if (it == '~') ans.push_back(s), s = "";
        else s+= it;
    }
    return ans;
}
