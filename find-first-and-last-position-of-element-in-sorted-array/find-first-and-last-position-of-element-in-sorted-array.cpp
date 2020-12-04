class Solution {
public:
    int firstpos(vector<int>& nums, int target, int n)
    {
        int low = 0, high = n-1, mid , pos = -1;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(nums[mid] == target)
            { 
                pos = mid;
                high = mid - 1;
            }
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
          }
        return pos;
    }
    int lastpos(vector<int>& nums, int target, int n)
    {
        int low = 0, high = n-1, mid , pos = -1;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(nums[mid] == target)
            { 
                pos = mid;
                low = mid + 1;
            }
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
            }
        return pos;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> ans;
        int n = nums.size();
      ans = {firstpos(nums,target,n),lastpos(nums,target,n)};
        
        return ans;
    }
};
