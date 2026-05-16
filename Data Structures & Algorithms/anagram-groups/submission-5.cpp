class Solution {
public:
    bool isAnagram(string str1, string str2){
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        if(str1 == str2) {
            return true;
        }
        return false;
    }


    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<int> vis(strs.size(), 0);
        vector<vector<string>> result;
        for(int i = 0; i<strs.size(); i++){
            if(vis[i] == 0){
                vector<string> vc;
                vc.push_back(strs[i]);
                vis[i] = 1;
                for(int j = i+1; j<strs.size(); j++){
                    if(vis[j] == 0){
                        if(isAnagram(strs[i], strs[j])) {
                            vc.push_back(strs[j]);
                            vis[j] = 1;
                        }
                    }
                }
                result.push_back(vc);
            }
        }
        return result;
    }
};


/*
["act","pots","tops","cat","stop","hat"]

[] -> [[]]

interate over array to check for similarities


function -> check isAnagram
*/
