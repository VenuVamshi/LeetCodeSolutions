class Solution:
    def myPow(self, x: float, n: int) -> float:
        #Handle negative exponents
        isNeg = n < 0
        n = abs(n)

        #Loop till n is zero
        ans = 1.0
        while n > 0:
            #Handle odd case
            if n % 2 == 1: ans *= x
            #Generate next squared power and half the exponent 
            x *= x
            n //= 2
        return 1/ans if isNeg else ans
