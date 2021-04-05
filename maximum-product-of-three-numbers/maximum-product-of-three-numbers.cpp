class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int p = 1;
        sort(nums.begin(), nums.end());
        p = nums[n-3]* nums[n-2]*nums[n-1];
        int x = nums[0]*nums[1]*nums[n-1];
        if(p >= 0)
        {
            
            return max(x,p);
        }
        else 
        {
            if(nums[n-1] < 0)
                return p;
            else 
            {
                if(nums[n-2] < 0)
                    return max(x,p);
            }
        }
        return max(x,p);
    }
};