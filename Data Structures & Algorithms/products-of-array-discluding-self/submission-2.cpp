class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Approach 1:
        // int prod = 1;
        // vector<int> res;
        // for (int i = 0; i<nums.size(); i++){
        //     for(int j = 0; j<nums.size(); j++){
        //         if(j == i) continue;
        //         prod *= nums[j];
        //     }
        //     res.push_back(prod);
        //     prod = 1;
        // }
        // return res;

        // Approach 2:

        vector<int> prefix(nums.size(), 1);
        vector<int> postfix(nums.size(), 1);
        vector<int> res;

        prefix[0] = nums[0];
        for(int i = 1; i<nums.size(); i++){
            prefix[i] = prefix[i-1]*nums[i];
        }

        postfix[nums.size()-1] = nums[nums.size()-1];
        for(int i = nums.size()-2; i>=0; i--){
            postfix[i] = postfix[i+1]*nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            int prod = 1;
            if(i-1>=0) prod =  prod * prefix[i-1];
            if(i+1<nums.size()) prod = prod * postfix[i+1];
            res.push_back(prod);
        }
        return res;
    }
};

/*
 
[1,2,4,6]

*/
