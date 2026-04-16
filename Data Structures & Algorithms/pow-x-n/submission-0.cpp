class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
         return 1;

        if(n < 0)
         {x = 1/x;
         n= -n;
         }

        double ans = 1.0;
        ans = ans * x * myPow(x,n-1);

        return ans;
    }
};
