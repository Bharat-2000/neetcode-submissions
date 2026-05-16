class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() == 0) return 0;
        int mxCnt = 1;
        int cnt = 1;
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i]+1 == nums[i+1]) {
                cnt++;
                mxCnt = max(mxCnt, cnt);
            }
            else if(nums[i] == nums[i+1]) {
                continue;
            }
            else {
                mxCnt = max(mxCnt, cnt); cnt = 1;}
        }
        return mxCnt;
    }
};

              
// [-1,-1,0,1,3,4,5,6,7,8,9]
// 1

// [2,20,4,10,3,4,5]
// [2,3,4,4,5,10,20]