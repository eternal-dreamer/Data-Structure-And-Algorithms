class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int dis = -1;
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] == 1)
            {
                if(dis == -1 or i-dis-1 >= k)
                    dis = i;
                else
                    return false;
                
            }
           
            
        }
        return true;
        
        
    }
};
