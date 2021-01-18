class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int,int> m;
        for(auto x : nums)
        {
           m[x]++;
        
        }
        for(auto x : nums)
        {
            
            if(m[x] != 0)
            {
                if(k % 2 == 0 and x == k/2) 
                { ans += floor(m[x]/2);
                 m[x] = 0;
                }
                else
                {ans += min(m[x],m[k-x]);
                 m[x] = 0;
                 m[k-x] = 0;
                }
            }
        }
        return ans;
        
    }
};
