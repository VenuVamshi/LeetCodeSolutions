class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //S1:Init Req DS
        int i = m-1,j = n-1, k = m+n-1;
        //compare and fill 
        while( i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--];
        }

        while( j >= 0) nums1[k--] = nums2[j--];
    }
};