class Solution {
public:
    string preprocess(string s){
        string temp;

        for(char ch : s)
        {
                if(isalnum(ch))
                        temp += tolower(ch);
        }

        return temp;
}
    bool isPalindrome(string str) {
         // S1-Init Req DSs and Preprocessing steps
        string s = preprocess(str);
        int low = 0;
        int high = s.size()-1;

        //S2-Move ptrs towards each other till they cross
        while (low < high) {//equality optional
                if(s[low++] != s[high--]) return false;//check equality and move ptrs towards middle
        }
        //S3-completion of traversal return true
        return true;
        
    }
};