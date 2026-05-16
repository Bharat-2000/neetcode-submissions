class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s[0]== ')' or s[0]== ']' or s[0]== '}') return false;
        for(int i =0; i<s.size(); i++){
            if(s[i] == '(' or s[i]== '[' or s[i]== '{'){
                st.push(s[i]);
            }
            else if(s[i]== ')' and st.size() > 0 and st.top() == '('){
                st.pop();
            }
            else if(s[i]== '}' and st.size() > 0 and st.top() == '{'){
                st.pop();
            }
            else if(s[i]== ']' and st.size() > 0 and st.top() == '['){
                st.pop();
            }else {
                return false;
            }
        }
        return st.size() == 0 ? true : false;
    }
};

// "(])"

