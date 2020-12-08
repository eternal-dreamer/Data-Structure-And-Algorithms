class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int start = 0;
        map<int,int> window;
        int ans = 0;
        for(int i = 0;i<tree.size();i++)
        {
            window[tree[i]]++;
            if(window.size() > 2)
            {
                while(window.size() > 2 and start < i)
                {
                    window[tree[start]]--;
                    if( window[tree[start]] == 0)
                        window.erase( tree[start]);
                    start ++;
                }
            }
            ans = max(ans, i-start+1);
        }
        return ans;
    }
};
