class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> vis1(26,0);
        vector<int> vis2(26,0);
        for(int i= 0; i<s1.size(); i++){
            vis1[s1[i] - 'a']++;
            vis2[s2[i] - 'a']++;
        }
        int i = 0 ,j = i+s1.size()-1;
        while(j<s2.size()-1){
            if(vis1 == vis2) {
                return true;
            }
            else{
                vis2[s2[i]-'a']--;
                i++;
                j++;
                vis2[s2[j]-'a']++;
            }
        }
        if(vis1 == vis2) {
            return true;
        }
        return false;
    }
};

// [l->1, e->1, c->1]
// i j 
// lecabee

/*
    int i = 0 ,j = 0;
    bool flag = false;
    string sortedS1Val = s1;
    sort(sortedS1Val.begin(), sortedS1Val.end());
    while (j<s2.size()){
        string tempStr = s2.substr(i, s1.size());
        cout<<"tempStr   "<<tempStr<<endl;
        sort(tempStr.begin(), tempStr.end());
        cout<< tempStr<< "  "<<sortedS1Val<<endl;
        if(tempStr == sortedS1Val) {flag = true; break;}
        else {
            i++;
            j++;
        }
    }
    return flag;
*/





