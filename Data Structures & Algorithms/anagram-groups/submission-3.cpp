class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> resultVC;
        unordered_map<string, int> unMpp;
        int i = 0;
        for(int j =0; j< strs.size(); j++){
            string sortedStr = strs[j];
            sort(sortedStr.begin(), sortedStr.end());
            if(unMpp.count(sortedStr)){
                int existingIndex = unMpp[sortedStr];
                resultVC[existingIndex].push_back(strs[j]);
            }
            else{
                vector<string> tempVector;
                unMpp.insert({sortedStr, i});
                tempVector.push_back(strs[j]);
                resultVC.push_back(tempVector);
                i++;
            }
        }  
        return resultVC;     
    }
};

//  ["act","cat","stop","hat"]

// j=0;
// [] -- unordered_map
// [] -- resultVC
// i = 0 -- size of resultVC

// j=0;
// [{"act", 0}] -- unordered_map
// [["act"]] -- resultVC
// ["act"] -- tempVector
// i = 1 -- size of resultVC

// j=1;
// [{"act", 0}] -- unordered_map
// [["act"]] -- resultVC
// [] -- tempVector
// i = 1 -- size of resultVC


// ["act","pots","tops","cat","stop","hat"]

// j=0;
// [] -- unordered_map
// [] -- resultVC
// i = 0 -- size of resultVC

// j=1;
// [{"act", 0}] -- unordered_map
// [["act"]] -- resultVC
// ["act"] -- tempVector
// i = 1 -- size of resultVC

// j=2;

// [{"act", 0}, {"opst", 1}] -- unordered_map
// [["act"], ["pots"]] -- resultVC
// ["pots"] -- tempVector
// i = 2 -- size of resultVC

// j=3;
// [{"act", 0}, {"opst", 1}] -- unordered_map
// [["act"], ["pots", "tops"]] -- resultVC
// ["act"] -- tempVector
// i = 1 -- size of resultVC




