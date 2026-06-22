class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        // Frequency table
        unordered_map<int, int> frequencyMap;

        // Phase 1: Count occurrences
        for (int num : nums) {

            frequencyMap[num]++;
        }

        vector<int> answer;

        // Phase 2: Find elements occurring more than n/3 times
        for (auto entry : frequencyMap) {

            int element = entry.first;
            int frequency = entry.second;

            if (frequency > nums.size() / 3) {

                answer.push_back(element);
            }
        }

        return answer;
    }
};