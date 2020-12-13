class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> x;
        int ans = 0;
        if(s.size() == 0)
            return 0;
        x.push(-1);
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '(')
                x.push(i);
            else
            {  
                x.pop();
                if(x.empty())
                    x.push(i);
                else
                    ans = max(ans, i-x.top());
               
                    
            }
        }
        return ans;
    }
};
