class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
         string k = "";
        string s = "";
        for(int i = 0; i < word1.size();i++)
        {
            k += word1[i];
        }
        for(int j = 0;j< word2.size();j++)
            s += word2[j];
        return s == k;
        
    }
};
