class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int globalMax = nums[0];
        int maxProd = nums[0];
        int minProd = nums[0];

        for(int i = 1; i < n ; i++){
            int x = nums[i];

            int newMaxProd = max( { x , x * minProd , x * maxProd } );
            int newMinProd = min( { x , x * minProd , x * maxProd } );

            maxProd = newMaxProd;
            minProd = newMinProd;

            globalMax = max ( globalMax , maxProd );

        }
        return globalMax;
    }
};