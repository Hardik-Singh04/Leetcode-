class Solution {
public:
    bool halvesAreAlike(string s) {
        int len=s.length();
        string a="",b="";
        int c1=0,c2=0;
        for(int i=0;i<len/2;i++)
        {
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]== 'E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                c1++;
            }
        }
        for(int j=len/2;j<len;j++)
        {
            if(s[j]=='a'|| s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]== 'E'||s[j]=='I'||s[j]=='O'||s[j]=='U'){
                c2++;
            }
        }
        if(c1==c2) return true;
        else return false;
    }
};
