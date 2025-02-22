class Solution {
public:
    int hammingWeight(int n) {
        int m=0;
        while(n!=0)
        {
            if(n&1)
            {
                m=m+1;
            }
           n= n>>1;
        }
        return m;
    }
};
