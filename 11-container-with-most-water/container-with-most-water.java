class Solution {
    public int maxArea(int[] height) {
       int left = 0;
       int right = height.length-1;
       int area = 0;
       while(left < right){
        int width = right - left;
        int length = Math.min(height[left],height[right]);
        int temparea = length*width;
        if(temparea > area)
            area = temparea;
        if(height[left] < height[right])
            left++;
        else
            right--;
        }
    return area;
    }

}