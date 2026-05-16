class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // for(int i = 0; i<s.length(); i++) {
        //     if (s[i] != t[i]) return false;
        // }

        // return true;


        unordered_map<char, int> mpp;

        for(int i = 0; i< s.size(); i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }

        for(auto it: mpp){
            if(it.second != 0) return false;
        }
        return true;
    }
};

/*
sort -> O(nlong(n)) + O(n)

map -> O(n) + O(n)
*/