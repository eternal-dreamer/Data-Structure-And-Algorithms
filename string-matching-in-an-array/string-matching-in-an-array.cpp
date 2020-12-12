class Solution {
public:
    static bool compare(string &a,string &b)
    {
        return a.length() < b.length();
    }
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
         vector<string> ans;
        int i = 0;
      for(;i<words.size()-1;i++)
      {
           for(int j = i+1;j<words.size();j++) 
                if( words[j].find(words[i]) !=  string::npos)
                {ans.push_back(words[i]);
                 break;
                }
             
           
                
        }
        return ans;
    }
};
