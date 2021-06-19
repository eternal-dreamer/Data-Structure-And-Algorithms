class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        
        int a = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(nums[j] != val)
            {
                
                nums[a] = nums[j];
                a++;
            }
        }
        return a;
    }
};