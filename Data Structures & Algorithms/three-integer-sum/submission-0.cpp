class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> responseVector;
        for (int i =0; i<nums.size(); i++){
            int j = i+1, k = nums.size()-1;
            while( j < k){
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> tempVector;
                    tempVector.push_back(nums[i]);
                    tempVector.push_back(nums[j]);
                    tempVector.push_back(nums[k]);
                    responseVector.insert(tempVector);
                    j++;
                }
                else if(nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                }
                else k--;
            }
        }
        vector<vector<int>> resultVector;
        for (auto it: responseVector) {
            resultVector.push_back(it);
        }
        return resultVector;
    }
};
