class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> m;
        for (auto s : S)
        m[s]++;
        int noofjewels = 0;
        for (char j :J)
        {
            if (m.find(j) != m.end())
                noofjewels += m[j];
        }
        return noofjewels;
    }
};
