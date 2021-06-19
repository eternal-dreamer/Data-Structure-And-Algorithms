class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
     sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0, j = 1;
        int ans = 0;
        while(i < n and j < n)
        {
            if( (i != j) and abs(nums[i] - nums[j]) == k)
            {
                while(i < n-1 and nums[i] == nums[i+1])
                    i++;
                while(j < n-1 and nums[j] == nums[j+1])
                    j++;
                i++;
                j++;
                ans++;
            }
            else if(abs(nums[i] - nums[j]) > k)
                    {
                        
                            i++;
                       
                    }
            else
                    {
                        
                            j++;
                       
                    }
        }
    return ans;
    }
};