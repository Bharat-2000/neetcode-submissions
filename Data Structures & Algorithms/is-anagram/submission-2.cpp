class Solution {
public:
    bool isAnagram(string s, string t) {
        //Brute force approcah

        if((s.size() != t.size())) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // for(int i = 0; i<s.size(); i++){
        //     if(s[i] != t[i]) return false;
        // }
        // return true;


        //time complexity optimization
        // map<int, int> mpp1;
        // map<int, int> mpp2;
        // for(int i=0; i<s.size(); i++){
        //     mpp1[s[i]-'a']++;
        //     mpp2[t[i]-'a']++;
        // }

        // for (int i = 0; i<26; i++){
        //     if(mpp1[i] != mpp2[i]) return false;    
        // }
        // return true;

        //space and time complexity optimization

        vector<int> vc1(26,0);
        vector<int> vc2(26,0);

        for(int i = 0; i<s.size(); i++){
            vc1[s[i]-'a']++; //for '0' based indexing
            vc2[t[i]-'a']++; //for '0' based indexing
        }

        for(int i = 0; i<26; i++){
            if(vc1[i] != vc2[i])return false;
        }
        return true;
    }
};
