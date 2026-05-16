class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> vc1(n,0);
        vector<int> vc2(n,0);
        vc1[0] = nums[0];
        vc2[n-1] = nums[n-1];
        vector<int> result;
        for (int i=0; i<n; i++){
            if(i-1 >= 0){
                vc1[i] = vc1[i-1]*nums[i];
            }
            if(n-i+1 < n){
                vc2[n-i] = vc2[n-i+1]*nums[n-i];
            }
        }
        

        result.push_back(vc2[1]);
        for(int i= 1; i<n-1; i++){
            int val = vc1[i-1]*vc2[i+1];
            result.push_back(val);
        }
        result.push_back(vc1[n-2]);
        return result;
    }
};

// [1,2,8,24]
// [48,48,24,6]