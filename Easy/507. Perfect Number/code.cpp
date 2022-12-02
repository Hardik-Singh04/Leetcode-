class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)  sum=sum+i;
        }
        if(num==sum && num!=1)    return true;
        else return false;
    }
};
