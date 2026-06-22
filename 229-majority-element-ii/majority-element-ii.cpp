class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        // Bring equal elements together
        sort(nums.begin(), nums.end());

        vector<int> answer;

        // Frequency of current group
        int frequency = 1;

        for (int i = 1; i <= nums.size(); i++) {

            // Extend current group
            if (i < nums.size() && nums[i] == nums[i - 1]) {

                frequency++;
            }

            // Current group ends
            else {

                // Add element if frequency exceeds n/3
                if (frequency > nums.size() / 3) {

                    answer.push_back(nums[i - 1]);
                }

                // Start counting next group
                frequency = 1;
            }
        }

        return answer;
    }
};