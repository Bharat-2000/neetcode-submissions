class Solution {
public:

    int deflectionPoint(vector<int> &nums){
        int i = 0;
        int j = nums.size()-1;
        while(i < j){
            int middle = (i+j)/2;
            if(nums[middle] > nums[j]) {
                i = middle+1;
            }else if(nums[middle] < nums[j]) {
                j = middle;
            }
        }   
        return j;
    }

    int triggerBinarySearchOnSortedArray (vector<int> &nums, int i, int j, int target){
        if(nums[i] ==  target) return i;
        while(i <= j){
            int middle = (i+j)/2;
            if(nums[middle] == target) return middle;
            if(nums[middle] < target) {
                i = middle+1;
            }else {
                j = middle-1;
            }
        }   
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int deflectionIndex = deflectionPoint(nums);
        cout<<deflectionIndex<<endl;
        int subArr1Result = triggerBinarySearchOnSortedArray(nums, 0, deflectionIndex, target);
        int subArr2Result = triggerBinarySearchOnSortedArray(nums, deflectionIndex, nums.size()-1, target);

        if(subArr1Result != -1) return subArr1Result;
        else if(subArr2Result != -1) return subArr2Result;
        else return -1;
    }
};
//  i
//    j
// [1,3]


// target = 3

/*
 i
           j
[3,4,5,6,1,2]

target = 1
*/
