class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n  = wage.size();
        vector<pair<double,int>>worker;
        for(int i = 0;i<quality.size();i++)
            worker.push_back({(double) wage[i] / quality[i],quality[i]});
        sort(worker.begin(),worker.end());
        double sum = 0,ans;
        priority_queue<int> p;
        for(int i = 0;i<k;i++)
        {
            sum += worker[i].second;
            p.push(worker[i].second);
        }
        ans = sum*worker[k-1].first;
        for(int i = k;i<n;i++)
        {
            int x = p.top();
            if(x > worker[i].second)
            {
                p.pop();
                p.push(worker[i].second);
                sum += worker[i].second -x;
            }
            ans = min(sum*worker[i].first,ans);
        }
        return ans;
    }
};
