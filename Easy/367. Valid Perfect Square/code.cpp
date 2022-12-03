class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        for (long j = 0; j * j >= 0 && j * j <= num; j ++) 
        {
            if (j * j == num) 
            {
                return true;
            }
        }
        return false;
    }
};
