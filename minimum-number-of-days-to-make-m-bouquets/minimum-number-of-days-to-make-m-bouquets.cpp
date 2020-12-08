class Solution {
public:
    bool check(vector<int>& rose, int m, int k, int mid)
    {
        int no_of_bouqets = 0, no_of_flower = 0;
        for(int i = 0;i< rose.size();i++)
        {
            if(rose[i] <= mid)
            {
                no_of_flower++;
                if(no_of_flower == k)
                {
                    no_of_bouqets++;
                    no_of_flower = 0;
                }
            }
            else 
                no_of_flower  = 0;
        }
        return no_of_bouqets >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans = -1;
        int upper = INT_MIN, low = INT_MAX;
        for(int i = 0;i<bloomDay.size();i++)
        {
            upper = max(upper,bloomDay[i]);
            low = min(low , bloomDay[i]);
        }
        
        while(low<= upper)
        {
            int mid = (low + upper)/2;
            if(check(bloomDay,m,k,mid))
               {
                   ans = mid;
                   upper = mid-1;
               }
             else
               low = mid+1;
               
        }
               return ans;
    }
};
