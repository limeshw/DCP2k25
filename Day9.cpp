#include <iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    
    string prefix = strs[0];  // take first string as initial prefix
    
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {  
            // keep reducing prefix until it matches
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    
    return prefix;
}

int main() {
    // vector<string> strs = {"flower", "flow", "flight"};
    vector<string> strs = {"apple", "ape", "april"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}
