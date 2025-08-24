#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end()); // sorted string as key
        mp[key].push_back(s);
    }

    vector<vector<string>> result;
    for (auto &entry : mp) {
        result.push_back(entry.second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(strs);

    // Print result
    for (auto &group : ans) {
        cout << "[ ";
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}