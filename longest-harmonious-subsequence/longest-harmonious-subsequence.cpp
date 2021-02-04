class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> m;
        int ans = 0;
        for(auto x : nums)
        {
            m[x] ++;
            if(m.find(x+1) != m.end())
                ans = max(ans, m[x] + m[x+1]);
            if(m.find(x-1) != m.end())
                ans = max(ans, m[x] + m[x-1]);
            
        }
        return ans;
    
        
    }
};