class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt = 0;
        int tempVal = 0;
        int i = 0, j = 0;
        unordered_map<char, int> mpp;
        while(j < s.size()){
            if(mpp.find(s[j]) == mpp.end() or mpp[s[j]] == 0){
                mpp[s[j]]++;
                tempVal++;
                cnt = max(cnt, tempVal);
                j++;
            }else {
                mpp[s[i]]--;
                tempVal--;
                i++;
            }
        }
        return cnt;
    }
};

/*
    int cnt = 0;
    int tempVal = 0;
    int i = 0, j = 0;
    vector<int> vis(26,0);
    while(i <= j){
        if(vis[s[j] - '0'] == 0) {
            vis[j]++;
            tempVal++;
            cnt = max(cnt, tempVal)
            j++;
        }else {
            vis[i]--;
            tempVal--;
            i++;
        }
    }
*/

// s="pwwkew"
