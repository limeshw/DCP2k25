#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for(char c : s) {
        // If it's an opening bracket, push to stack
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        } 
        else {
            // If closing bracket but stack is empty -> invalid
            if(st.empty()) return false;

            char top = st.top();
            st.pop();

            // Check if matching pair
            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||
               (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    // Valid only if stack is empty at the end
    return st.empty();
}

int main() {
    string s = "()()((()";
    // cout << "Enter string: ";
    // cin >> s;

    if(isValid(s))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
