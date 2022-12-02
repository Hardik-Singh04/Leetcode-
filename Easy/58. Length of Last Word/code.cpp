class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        int check = 0;
        for(int i = s.length() - 1; i >= 0; i--) 
        {
            if(check == 0 && s[i] == ' ')
            {
                continue;
            }
            if(s[i] != ' ') 
            {
                check = 1;
                c++;
            } 
            else 
            {
                break;
            }
        }
        return c;
    }
};
