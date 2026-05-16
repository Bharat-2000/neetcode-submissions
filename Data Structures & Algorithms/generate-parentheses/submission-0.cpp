class Solution {
public:
    vector<string> resultStr;

    bool isValidParenthesis (string s){
        stack<int> st;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(') st.push(s[i]);
            else if (st.empty()) return false;
            else st.pop();
        }
        return st.empty() ? true : false;
    }

    void generateString(int n, string referenceStr){
        if(referenceStr.size() == 2*n) {
            if(isValidParenthesis(referenceStr)) resultStr.push_back(referenceStr);
            return;
        }
        string tempStr1 = referenceStr+'(';
        generateString(n, tempStr1);
        string tempStr2 = referenceStr + ')';
        generateString(n, tempStr2);
        return;
    }

    vector<string> generateParenthesis(int n) {
        generateString(n, "(");
        return resultStr;
    }
};
