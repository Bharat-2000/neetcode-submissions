class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int i = 0, j=heights.size()-1;
        while(i < j){
            int tempHeight = min(heights[i], heights[j]);
            int tempLength = j-i;
            int tempArea = tempHeight * tempLength;
            maxArea = max(maxArea, tempArea);
            if((heights[i] < heights[j])){
                i++;
            }else {
                j--;
            }
        }
        return maxArea;
    }
};
