class Solution {
public:
    int scoreOfParentheses(string x) {
        stack<int> s;
        int ans = 0, c = 0;
        for(int i = 0;i<x.size();i++)
        {
            if(x[i] == '(')
            {  s.push(c);
             c = 0;
            }
            else
            {
                c = s.top() + max(2*c,1);
                s.pop();
            }
        }
        return c;
    }
};
