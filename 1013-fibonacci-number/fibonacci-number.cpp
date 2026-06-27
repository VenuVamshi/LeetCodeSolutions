class Solution {
public:
    int fib(int n) {
        //base case
        if (n == 0) return 0;
        //init base states
        int a = 0;
        int b = 1;
        int c;
        //Compute Fibonacci iteratively
        for(int i = 2; i <= n; i++){
            c = a + b;
            // Shift previous values
            a = b;
            b = c;
        }
        return c;
        
    }
};