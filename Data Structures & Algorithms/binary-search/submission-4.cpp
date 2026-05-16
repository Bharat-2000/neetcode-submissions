class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0; 
        int j = nums.size()-1;

        if(nums.size() == 1) {
            if(nums[0] == target) return 0;
            return -1;
        }
        while(i<=j){
            int middle = (i + j)/2;
            if(nums[middle] < target) {
                i = middle+1;
            }else if(nums[middle] > target){
                j = middle-1;
            }else {
                return middle;
            }
        }
        return -1;
    }
};

//         t=5

//    i 
//    j
// [2,5]


