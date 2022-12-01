class Solution {
public:
    bool isPalindrome(int x) {
    long int rev=0;
    int t,n1;
    n1=x;
    if(x<0)
        return false;
    while(x!=0)
    {
        t=x%10;
        rev=rev*10+t;
        x=x/10;
    }
    return n1==rev;
    }
};
