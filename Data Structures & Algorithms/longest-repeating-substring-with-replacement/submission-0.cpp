class Solution {
public:
    bool checkVis (vector<int> &vis, int k){
        int maxFeq = 0;
        int totalVal = 0;
        for(int i =0; i<26; i++){
            maxFeq = max(maxFeq, vis[i]);
            totalVal += vis[i];
        }
        totalVal -= maxFeq;
        if(totalVal <= k) return true;
        else return false;
    }

    int characterReplacement(string s, int k) {
        int i =0, j = 0;
        int tempVal = 0, cnt = 0;
        vector<int> vis(26, 0);
        while (j < s.size()){
            vis[s[j] - 'A']++;
            if(checkVis(vis, k)){
                tempVal++;
                cnt = max(cnt, tempVal);
                j++;
            }else {
                vis[s[i]-'A']--;
                vis[s[j]-'A']--;
                i++;
                tempVal--;
            }
        }
        return cnt;
    }
};

//AAABABB
// []

/*
    bool checkVis (vector<int> &vis, int k){
        int maxFeq = 0;
        int totalVal = 0;
        for(int i =0; i<26; i++){
            maxFeq = max(maxFeq, vis[i]);
            totalVal += vis[i];
        }
        totalVal -= maxFeq;
        if(totalVal <= k) return true;
        else return false;
    }

    int i =0; j = 0;
    int tempVal = 0, cnt = 0;
    while (j < s.size()){
        vis[s[j] - '0']++;
        if(checkvis(vis, k)){
            tempVal++;
            cnt = max(cnt, tempVal);
            j++;
        }else {
            vis[s[i]-'0']--;
            vis[s[j]-'0']--;
            i++;
        }
    }
    return cnt;


*/