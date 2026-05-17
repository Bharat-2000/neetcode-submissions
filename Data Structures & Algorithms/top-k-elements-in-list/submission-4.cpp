class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }

        vector<vector<int>> vc(n+1);

        for(auto it: mpp){
            cout<<it.first<<" "<<it.second<<endl;
            vc[it.second].push_back({it.first});
        }

        for(int i = 0; i<vc.size(); i++){
            for(int j=i+1; j<vc[i].size(); j++){
                cout<<vc[i][j]<<" ";
            }
            cout<<endl;
        }
        int count = k;
        vector<int> res;

        for(int i = vc.size()-1; i>=0; i--){
            if(count>0 && vc[i].size() > 0) {
                for(int j = 0; j<vc[i].size(); j++){
                    res.push_back(vc[i][j]);
                    count--;
                }
            }
        }

        return res;
    }
};
