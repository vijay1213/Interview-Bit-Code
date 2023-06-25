int Solution::threeSumClosest(vector<int> &nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    int res = 0;
    int min_diff = 1e9;
    
    for(int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        
        while(j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            
            if(sum == target) {
                return sum;
            }
           else if(abs(target - sum) < min_diff)
            {
                min_diff = abs(target - sum);
                res = sum;
            }
          else if(sum > target)
                k--;
            else 
                j++;
        }
    }
    
    return res;
        
}
