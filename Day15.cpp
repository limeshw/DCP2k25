#include<iostream>
#include<vector>
#include<string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(256, -1); // store last index of each char
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        if (lastIndex[s[right]] >= left) {
            // if char already seen in current window, move left
            left = lastIndex[s[right]] + 1;
        }
        lastIndex[s[right]] = right; // update last index
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    // string s;
    // cin >> s;
    cout << lengthOfLongestSubstring("abcbacbb") << endl;
    return 0;
}
