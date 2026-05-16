class Solution {
public:
    bool isPalindrome(string s) {
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      int i =0 , j=s.size()-1;
      while (i<j){
        if((s[i]-'a' < 0 or s[i]-'a' > 26) and (s[i]-'0' < 0 or s[i]-'0' > 9)) {
            i++;
        }else if((s[j]-'a' < 0 or s[j]-'a' > 26) and (s[j]-'0' < 0 or s[j]-'0' > 9)) {
            j--;
        }else {
            if(s[i] != s[j]) return false;
            else {
                i++; 
                j--;
            }
        }
      }
      return true;
    }
};
