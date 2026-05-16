class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> res;
        for (int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums.size(); j++){
                if(j == i) continue;
                prod *= nums[j];
            }
            res.push_back(prod);
            prod = 1;
        }
        return res;
    }
};

/*
 
[1,2,4,6]

*/
