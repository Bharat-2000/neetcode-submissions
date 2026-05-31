class Solution {
public:
    bool isAlphanumeric(char c) {
        // Check for digits 0-9
        bool isDigit = (c - '0' >= 0) && (c - '0' <= 9);
        
        // Check for uppercase letters A-Z
        bool isUpper = (c - 'A' >= 0) && (c - 'A' <= 25);
        
        // Check for lowercase letters a-z
        bool isLower = (c - 'a' >= 0) && (c - 'a' <= 25);
        
        // Return true if it matches any of the categories
        return isDigit || isUpper || isLower;
    }   
    bool isPalindrome(string s) {
        string resStr = "";
        for(int i = 0; i<s.length(); i++){
            if(isAlphanumeric(s[i])) resStr += tolower(s[i]);
        }
        cout<<resStr<<endl;

        int i = 0; int j = resStr.length()-1;
        while(i<j){
            if(resStr[i] == resStr[j]){ i++; j--;}
            else {return false;}
        }
        return true;
    }
};

/* Approach - 1 (Brute Force):

store the value into another string with only aplhanumberic values
iterate from left and from right at the same time via pointers 
            
             j
wasitacaroracatisaw
     i  




*/