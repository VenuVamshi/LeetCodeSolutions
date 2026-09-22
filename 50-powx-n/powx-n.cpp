class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;

        if (exp < 0) {
            x = 1.0 / x;
            exp = -exp;
        }

        double answer = 1.0;

        while (exp > 0) {
            // If the current binary bit is 1, this power contributes to the answer.
            if (exp % 2 == 1) {
                answer *= x;
            }

            // Move to the next power: x, x^2, x^4,
            x *= x;

            // Remove the least significant binary bit.
            exp /= 2;
        }

        return answer;
    }
};
