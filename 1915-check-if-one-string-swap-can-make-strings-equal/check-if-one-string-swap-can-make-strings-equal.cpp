class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        if ( s1 == s2 ) return true;

        vector<int> misMatchIndices;

        for ( int i = 0; i < s1.length(); i++ ) {
            if ( s1[i] != s2[i] ) {
                misMatchIndices.push_back(i);
            }

            if ( misMatchIndices.size() > 2 ) {
                return false;
            }
        }

        if (misMatchIndices.size() == 1) { return false; }
        else {
            swap(s2[misMatchIndices[0]],s2[misMatchIndices[1]]);
            return s1 == s2;
        }

    }
};