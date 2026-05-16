class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for (int i =0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        vector<vector<int>> vc1(nums.size() + 1);

        for (auto& it: mpp){
            vc1[it.second].push_back(it.first);
        }

        vector<int> res;

        for(int i=vc1.size()-1; i>=0; i--){
            for(int j =0; j<vc1[i].size(); j++){
                res.push_back(vc1[i][j]);
                if(res.size() == k) return res;
            }
        }
        return res;
    }
};

// [{1,3}, {2,2}, {3,1}]

// [[],[],[3], [2], [1], [], [], []]