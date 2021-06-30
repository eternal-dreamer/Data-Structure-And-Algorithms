class Solution {
public:
    bool isp(vector<int> &b, int sum,int m)
    {
        int s = 0;
        int n = b.size();
        int  c= 1;
        for(int i = 0; i< n; i++)
        {
            if(b[i] > sum )
                return false;
            s += b[i];
            if(s  >  sum)
            {
                s = b[i];
                c++;
            }
            if(c > m)
                return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int l = INT_MAX;
        int h = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            l = min(l,nums[i]);
            h += nums[i];
        }
        int ans = INT_MAX;
        while(l <= h)
        {
            int mid =(l+h)/2;
            if(isp(nums,mid,m))
            {
                ans = min(ans,mid);
                h = mid -1;
            }
            else
                l = mid +1;
        }
        return ans;
    }
};