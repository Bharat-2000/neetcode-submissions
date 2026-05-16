class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (int i = 0; i<tokens.size(); i++){
            if(tokens[i] != "/" and tokens[i] != "+" and tokens[i] != "-" and tokens[i] != "*"){
                int tempIntVal = stoi(tokens[i]);
                stk.push(tempIntVal);
            }else{
                int val1 = stk.top();
                stk.pop();
                int val2 = stk.top();
                stk.pop();
                string str = tokens[i];
                if(str == "*"){
                    val2 = val2 * val1;
                    stk.push(val2);
                }
                else if(str == "-"){
                    val2 = val2 - val1;
                    stk.push(val2);
                }
                else if(str == "+"){
                    val2 = val2 + val1;
                    stk.push(val2);
                }
                else {
                    val2 = val2 / val1;
                    stk.push(val2);
                }
            }
        }
        // while(!stk.empty()){
        //     cout<<stk.top()<<endl;
        //     stk.pop();
        // }
        return stk.top();
    }
};


// ["4","13","5","/","+"]

// [6]

// val1 = 2
// val2 = 4

// val2 = 4 + 2 = 6

