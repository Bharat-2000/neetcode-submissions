class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() <= 1) return false;
        map<int, int> mpp;
        for (int i = 0; i< nums.size(); i++){
            mpp[nums[i]]++;
        }


        for (auto it: mpp){
            if(it.second > 1) return true;
            cout<<it.first<<" "<<it.second<<endl;
        }
        return false;

    }
};