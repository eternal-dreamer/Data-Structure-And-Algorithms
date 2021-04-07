class MyCalendar {
public:
    vector<pair<int,int>> v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        if(v.empty())
        {
            
            v.push_back(make_pair(start,end));
            return true;
        }
        for(int i = 0; i<v.size(); i++)
        {
            if(start < v[i].second and end > v[i].first)
                return false;
            
        }
                    v.push_back(make_pair(start,end));
return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */