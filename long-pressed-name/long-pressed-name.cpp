class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
       
        int i = 0, j = 0;
        while(i < name.length() and j<typed.length())
        {
            char ch1 = name[i], ch2 = typed[j];
            if(ch1 != ch2)
                return false;
            int count = 0;
            while(name[i] == ch1)
            {
                i++;
                count --;
            }
            while(typed[j] == ch2)
            {
                j++;
                count++;
            }
            if(count <0 )
                return false;
        }
         return (i ==name.length() and j == typed.length());
    }
};
