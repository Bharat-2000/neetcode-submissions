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
        referenceStr +='(';
        generateString(n, referenceStr);
        referenceStr.pop_back();
        referenceStr += ')';
        generateString(n, referenceStr);
        // referenceStr.pop_back();
        return;
    }

    vector<string> generateParenthesis(int n) {
        generateString(n, "(");
        return resultStr;
    }
};

// "(((("

// "(((("

// "(((("

// "(((("


/*
    void generateString(int n, string referenceStr){
        if(referenceStr.size() == 2*n) {
            if(isValidParenthesis(referenceStr)) resultStr.push_back(referenceStr);
            return;
        }
        referenceStr +='(';
        generateString(n, referenceStr);
        referenceStr.pop_back();
        referenceStr += ')';
        generateString(n, referenceStr);
        // referenceStr.pop_back();
        return;
    }


    void generateString(int n, string referenceStr){
        if(referenceStr.size() == 2*n) {
            if(isValidParenthesis(referenceStr)) resultStr.push_back(referenceStr);
            return;
        }
        referenceStr +='(';
        generateString(n, referenceStr);
        referenceStr.pop_back();
        referenceStr += ')';
        generateString(n, referenceStr);
        // referenceStr.pop_back();
        return;
    }
*/

    // ")))"

// ")))("  ))))

//  ))))(  )))))
