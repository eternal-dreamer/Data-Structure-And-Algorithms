class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(int i=0;i<emails.size();i++)
        {
            int z=0;
            for(int j=0;j<emails[i].length();j++)
            {
                if(emails[i][j]=='.')
                {
                    emails[i].erase(j,1);
                    j--;
                }
                else if(emails[i][j]=='+')
                {
                     z=j;
                    break;
                }
                else if(emails[i][j]=='@')
                {
                    break;
                }   
            }
            int y=emails[i].find('@');
            if(z!=0)
            {
                emails[i].erase(z,y-z);
            }
            s.insert(emails[i]);
        }
        
        return s.size();
​
    }
};
