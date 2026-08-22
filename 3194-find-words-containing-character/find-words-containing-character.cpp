class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        string word;
        vector<int> ans;
        
        for(int i = 0; i < words.size(); i++){
            word = words[i];
            for(char c : word){
                if(c == x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        
        return ans;
    }
};