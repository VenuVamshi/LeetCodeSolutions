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
        return isPalin(to_string(x));
    }
};