class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // S1: Sort array
        sort(nums.begin(), nums.end());

        int n = nums.size();

        vector<vector<int>> answer;

        // S2: Fix first element
        for(int i = 0; i < n; i++) {

            // Skip duplicate first elements
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            // S3: Solve remaining array using Two Pointers
            while(left < right) {

                int currentSum =
                    nums[i] +
                    nums[left] +
                    nums[right];

                // Need larger sum
                if(currentSum < 0) {

                    left++;
                }

                // Need smaller sum
                else if(currentSum > 0) {

                    right--;
                }

                // Valid triplet found
                else {

                    answer.push_back({
                        nums[i],
                        nums[left],
                        nums[right]
                    });

                    left++;
                    right--;

                    // Skip duplicate second element
                    while(left < right &&
                          nums[left] == nums[left - 1])
                        left++;

                    // Skip duplicate third element
                    while(left < right &&
                          nums[right] == nums[right + 1])
                        right--;
                }
            }
        }

        // S4: Return all unique triplets
        return answer;
    }
};