class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // bruteforce approach
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i] + nums[j] == target) return {i, j};
        //     }
        // } 
        // return {};

        // time optimization condition
        unordered_map<int,int> mpp;
        for (int i=0; i<nums.size(); i++){
            mpp[nums[i]] = i;
        }
        for (int i=0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(mpp.count(diff) and mpp[diff] != i){
                return {i, mpp[diff]};
            }
        }
        return {};
    }
};
