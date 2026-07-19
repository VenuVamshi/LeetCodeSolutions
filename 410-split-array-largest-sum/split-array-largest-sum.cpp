class Solution {
public:

    bool helper(vector<int>& nums, int k, int target) {

    int subarrSum = 0;
    int subarrCount = 1;

    for (int num : nums) {

        if (subarrSum + num <= target) {
            subarrSum += num;
        }
        else {
            subarrCount++;
            subarrSum = num;
        }
    }

    return subarrCount <= k;
}
    int splitArray(vector<int>& nums, int k) {

        //find maxVal and sum
        int n = nums.size();
        int maxVal = nums[0];
        int sum = nums[0];

        for (int i = 1; i < n; i++) {
            maxVal = max(maxVal, nums[i]);
            sum += nums[i];
        }

        //do binary search on maxVal and sum
        int low = maxVal;
        int high = sum;
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (helper(nums, k,mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};