class Solution {
public:
    int majorityElement(vector<int>& nums) {
     // S1 sort the vector
    sort(nums.begin(), nums.end());
    //S2-return mid element 
    return nums[nums.size() / 2];
    }
};