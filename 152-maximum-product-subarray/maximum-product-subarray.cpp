class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int globalProduct = INT_MIN;
        for(int i = 0; i < n ; i++){
            int localProduct = 1;
            for(int j = i; j < n; j++){
                localProduct *= nums[j];
                globalProduct = max(globalProduct,localProduct);
            }
        }
        return globalProduct;
    }
};