class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // for(int i = 0; i<numbers.size(); i++){
        //     for(int j = i+1; j<numbers.size(); j++){
        //         if(numbers[i] + numbers[j] == target) return {i+1, j+1};
        //     }
        // }

        int l = 0; 
        int r = numbers.size() - 1;

        while(l < r){
            if(numbers[l] + numbers[r] == target) return {l+1, r+1};
            if(numbers[l] + numbers[r] < target) l++;
            else if(numbers[l] + numbers[r] > target) r--;
        }

        return {};
    }
};


/*
Approach - 1:

take two loops i and j and do a n^2 approach


Approach - 2:

as we know that this is a sorted index we can apply the binrary search with checking the middle.
 i
       j
[1,2,3,4]

if(nums[i] + nums[j] == target) return {i,j};

is(nums[i] + nums[j] < target) i++;
else j--;



*/
