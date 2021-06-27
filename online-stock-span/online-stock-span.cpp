class StockSpanner {
public:
    stack<pair<int,int>>s;
    vector<int> v;
    int n = 0;
    StockSpanner() {
        
    }
    
    int next(int price) {
       int c = 1;
        while(!s.empty() and s.top().first <= price)
        {
            c += s.top().second;
            s.pop();
        }
        s.push(make_pair(price,c));
        return c;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */