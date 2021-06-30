class Solution {
public:
   struct cmp{
       bool operator()(pair<int,string> &a, pair<int,string> &b)
    {
        if(b.first == a.first)
            return a.second > b.second;
            return a.first < b.first;
    }
   };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        for(auto c: words)
            m[c] ++;
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> q;
        for(auto c : m)
        {
            q.push(make_pair(c.second,c.first));
        }
        vector<string> s;
        while(k--)
        {
            s.push_back(q.top().second);
            q.pop();
        }
        return s;
    }
};