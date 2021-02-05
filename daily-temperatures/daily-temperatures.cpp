class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> s;
        vector<int> ans(t.size(), 0);
        for(int i = t.size() - 1; i >= 0; i--)
        {
            while(!s.empty() and t[i] >= t[s.top()])
                s.pop();
            ans[i] = s.empty() ? 0 : s.top()- i;
            s.push(i);
        }
        return ans;
        
    }
};