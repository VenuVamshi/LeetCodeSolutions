class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        // Two possible majority candidates
        int candidateElement1 = 0;
        int candidateElement2 = 1;

        // Vote margins of the candidates
        int voteBalance1 = 0;
        int voteBalance2 = 0;

        // Phase 1: Find possible majority candidates
        for (int num : nums) {

            // Support candidate 1
            if (num == candidateElement1) {

                voteBalance1++;
            }

            // Support candidate 2
            else if (num == candidateElement2) {

                voteBalance2++;
            }

            // Elect a new candidate 1
            else if (voteBalance1 == 0) {

                candidateElement1 = num;
                voteBalance1 = 1;
            }

            // Elect a new candidate 2
            else if (voteBalance2 == 0) {

                candidateElement2 = num;
                voteBalance2 = 1;
            }

            // Cancel one vote from both candidates
            else {

                voteBalance1--;
                voteBalance2--;
            }
        }

        // Phase 2: Verify actual frequencies
        int frequency1 = 0;
        int frequency2 = 0;

        for (int num : nums) {

            if (num == candidateElement1) {

                frequency1++;
            }

            else if (num == candidateElement2) {

                frequency2++;
            }
        }

        vector<int> answer;

        // Add candidate 1 if frequency exceeds n/3
        if (frequency1 > nums.size() / 3) {

            answer.push_back(candidateElement1);
        }

        // Add candidate 2 if frequency exceeds n/3
        if (frequency2 > nums.size() / 3) {

            answer.push_back(candidateElement2);
        }

        return answer;
    }
};