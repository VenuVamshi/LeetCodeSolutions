class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        
        for (auto num1 : nums1) {
            auto it = find(nums2.begin(), nums2.end(), num1);
            if (it != nums2.end()) {
                res.push_back(*it);
                nums2.erase(it);
            }
        }
        
        return res;
    }


};