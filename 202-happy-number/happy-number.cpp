class Solution {
public:
    bool isHappy(int n){
        unordered_set<int> s;
        
        int temp = n;
        while(1){
        int digitSquareSum = 0;
        while(temp > 0){
            int lastDigit = temp % 10;
            digitSquareSum += lastDigit*lastDigit;
            temp /= 10;
        }
        if(digitSquareSum == 1) return true;
        else if(s.count(digitSquareSum)) return false;
        else s.insert(digitSquareSum);
        temp = digitSquareSum;
        }

    }
};