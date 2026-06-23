class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> a(nums1.begin(), nums1.end());
        unordered_set<int> ainb;
        
        for (auto num : nums2) {
            if (a.count(num)) {
                ainb.insert(num);
            }
        }
        
        return vector<int>(ainb.begin(), ainb.end());
    }
};