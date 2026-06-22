class Solution {
public:
    int majorityElement(vector<int>& nums) {
         //S1:init req DSs
    int candidateElement = 0;
    int voteBalance = 0;
    // S2 Traverse whole array
    for (auto num : nums) {
        //edge case
        if (voteBalance == 0) candidateElement = num;
        //sape party power up else power down
        if (candidateElement == num) voteBalance++;
        else voteBalance--;
        
        
    }
    return candidateElement;
}
   
};