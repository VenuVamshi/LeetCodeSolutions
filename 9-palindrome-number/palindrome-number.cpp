class Solution {
public:
    bool isPalin(string s){
        int low = 0,high = s.size()-1;
        while(low < high){
            if( s[low++] != s[high--]) return false;
        }
        return true;
    }
    bool isPalindrome(int x) {
        //return isPalin(to_string(x));
        if( x < 0) return false;
        long temp = x;
        long revnum = 0;
        while(temp > 0){
            long lastdigit = temp % 10;
            revnum = 10*revnum + lastdigit;
            temp = temp / 10;
        }
        return revnum == x;

        
    }
};