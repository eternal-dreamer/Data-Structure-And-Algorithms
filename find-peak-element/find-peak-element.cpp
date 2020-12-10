class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size()-1;
        int low = 0;
        while(low < n)
        {
            int mid = (n+low)/2;
            if(nums[mid] < nums[mid+1])
                low = mid+1;
            else
                n = mid;
            
        }
        return low;
    }
};
