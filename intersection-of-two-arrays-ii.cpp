class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> freq;
        vector<int> ans;
        for(auto x:nums1)
            freq[x]++;
        for(int x:nums2)
        { 
            
            if(freq[x] > 0)
            {
                ans.push_back(x);
                freq[x]--;
            }
         
        }
        return ans;
        
    }
};
