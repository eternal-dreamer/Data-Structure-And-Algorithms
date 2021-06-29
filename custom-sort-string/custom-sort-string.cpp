class Solution {
public:
    string customSortString(string order, string str) {
        map<char,int> m;
       
        for(auto c: str)
            m[c]++;
        string k = "";
        for(auto c : order)
        {
            while(m[c] != 0)
            {k += c;
             m[c]--;
            }

        }
        for(auto c : str)
        {
            if(m[c])
                 k += c;
                
        }
        return k;
    }
};