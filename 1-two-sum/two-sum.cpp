using namespace  std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){

        vector<pair<int,int>> valindex;
        for(int i=0;i<nums.size();i++) {
            valindex.push_back({nums[i],i});
        }
        sort(valindex.begin(),valindex.end());

        int low = 0;
        int high = valindex.size()-1;
        while(low<high) {
            int sum = valindex[low].first+valindex[high].first;
            if(sum==target) {
                return {valindex[low].second,valindex[high].second};
            }
            else if(sum<target) {
                low++;
            }
            else {
                high--;
            }
        }
        return {};


    }
};