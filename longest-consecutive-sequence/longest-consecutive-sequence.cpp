class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        unordered_set<int> num_set;
        for(int n : nums)
            num_set.insert(n);
        int curlen = 0;
        int maxlen = 0;
        for(int n:nums)
        {
            if(num_set.find(n-1) == num_set.end())
            {
                curlen = 1;
                while(num_set.find(n+1) != num_set.end())
                {
                    n += 1;
                    curlen++;
                }
                maxlen = max(maxlen,curlen);
            }
        }
        return maxlen;
    }
};
