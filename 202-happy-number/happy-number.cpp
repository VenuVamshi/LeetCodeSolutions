class Solution {
public:
    bool isHappy(int n){
        
        //s1-declare and init required DSs
        unordered_set<int> s;
        int temp = n;
        //s2-loop infinitely until either conditions are met
        while(1){
            int digitSquareSum = 0;
            //Compute digitSquareSum
            while(temp > 0){
                int lastDigit = temp % 10;
                digitSquareSum += lastDigit*lastDigit;
                temp /= 10;
            }
            //check 3 mutually exclusive conditions 
            //mec1 found happy number return 1
            if(digitSquareSum == 1) return true;
            //mec2 digitSqureSum is already in set so infinite loop so return false
            else if(s.count(digitSquareSum)) return false;
            //mec 3 insert digitSquareSum to set
            else s.insert(digitSquareSum);
            // place digitSquareSum in place of temp;
            temp = digitSquareSum;
        }

    }
};