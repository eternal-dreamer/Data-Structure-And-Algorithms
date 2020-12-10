class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        if(nums.size() == 2)
            return nums[0] > nums[1]?nums[1]:nums[0];
        
        int h = nums.size()-1;
        if(nums[h] > nums[0])
            return nums[0];
        int l = 0;
        while(l <= h)
        {
            int mid = (l+h)/2;
            if(nums[mid] > nums[mid+1])
                return nums[mid+1];
            else if(nums[mid-1] > nums[mid])
                return nums[mid];
            else if(nums[l] < nums[mid])
                l = mid+1;
            else
                h = mid-1;
​
        }
        return nums[0];
    }
};
