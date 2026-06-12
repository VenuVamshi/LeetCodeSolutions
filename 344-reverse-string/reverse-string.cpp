class Solution {
public:
    void reverseString(vector<char>& s) {
          // S1-Init Req DSs
        int low = 0;
        int high = s.size()-1;

        //S2-Move ptrs towards each other till they cross
        while (low < high) {//equality optional
                swap(s[low++], s[high--]);//swap and move ptrs towards middle
        }
        
    }
};