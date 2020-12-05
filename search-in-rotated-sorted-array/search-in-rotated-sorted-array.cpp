class Solution {
public:
    int binarysearch(vector<int>& nums, int target, int low,int high)
    {
        if(low > high)
            return -1;
        int mid = (low + high) / 2;
        if(nums[mid] == target)
            return mid;
        if (nums[mid] >= nums[low])
        {
            if(nums[mid] >= target and nums[low] <= target)
                return binarysearch(nums,target,low,mid-1);
        
                return binarysearch(nums,target,mid + 1,high);
        }
        if(nums[mid] <= target and nums[high] >= target)
            return binarysearch(nums,target,mid + 1,high);
    return binarysearch(nums,target,low,mid-1);
        
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return binarysearch(nums,target,0,n-1);
    }
};
