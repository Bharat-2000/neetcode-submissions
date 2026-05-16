class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0;
        int j = nums.size()-1;
        int response = nums[0];
        while(i < j){
            int middle = (i+j)/2;
            if(nums[middle] > nums[j]) {
                i = middle+1;
                response = min(response, nums[j]);
            }else if(nums[middle] < nums[j]) {
                j = middle;
                response = min(response, nums[i]);
            }
        }   
        return response;
    }
};


/*

     i
           j
[3,4,5,6,1,2]

response = 0;

   i
     j
[4,5,0,1,2,3]


[12, 21, 25, 99, 1000]

i
                    j
[1000, 99, 25, 21, 12]
*/