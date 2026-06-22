class Solution {
public:
    int majorityElement(vector<int>& nums) {
         //S1 init required DSs
    unordered_map<int, int> freq;
    //S2 fill the freq table
    for (auto num : nums) freq[num]++;
    //S3 search fs greater than n by 2
    for (auto p : freq) {
        if (p.second > nums.size() / 2) return p.first;
    }
    return -1;
    }
    
};