class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // O(nlong(n))
        // sort(nums.begin(), nums.end());
        // if(nums.size() == 0) return 0;
        // int mxCnt = 1;
        // int cnt = 1;
        // for(int i = 0; i<nums.size()-1; i++){
        //     if(nums[i]+1 == nums[i+1]) {
        //         cnt++;
        //         mxCnt = max(mxCnt, cnt);
        //     }
        //     else if(nums[i] == nums[i+1]) {
        //         continue;
        //     }
        //     else {
        //         mxCnt = max(mxCnt, cnt); 
        //         cnt = 1;
        //     }
        // }
        // return mxCnt;

        // O(n)
        unordered_map<int, int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        int maxi = 0;
        for (auto it: mpp){
            if(mpp.find(it.first - 1) == mpp.end()) {
                int cnt = 1;
                int currentIndex = it.first + 1;
                while(mpp.find(currentIndex) != mpp.end()){
                    cnt++;
                    currentIndex++;
                }
                maxi = max(maxi, cnt);
            }
        }
        return maxi;
    }
};

// [{2,1}, {20,1}, {4,2}, {3,1}, {5,1}]
// [-1,-1,0,1,3,4,5,6,7,8,9]
// 1

// [2,20,4,10,3,4,5]
// [2,3,4,4,5,10,20]