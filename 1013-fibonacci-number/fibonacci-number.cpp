class Solution {
public:
    int fib(int n) {
        //base case
        if (n == 0) return 0;
        //init base states
        int a = 0,b = 1,ans;
        //Compute Fibonacci iteratively
        for(int i = 2; i <= n; i++){
            ans = a + b;
            // Shift previous values
            a = b;
            b = ans;
        }
        //return ans
        return ans;
        
    }
};