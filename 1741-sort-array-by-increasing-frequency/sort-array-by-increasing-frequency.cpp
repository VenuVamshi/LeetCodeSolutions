class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> mp;
        for(auto num : nums) mp[num]++;

        sort(nums.begin(),nums.end(),[&](const auto& a,const auto& b){
            if(mp[a] == mp[b]) return a > b; //very imp not less than 
            return mp[a] < mp[b];
        });
        return nums;
    }
};