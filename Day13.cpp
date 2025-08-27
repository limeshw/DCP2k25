#include <iostream>
#include <string>
using namespace std;

    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        
        int start = 0, maxLen = 1;  // default: first char is a palindrome
        
        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
        };
        
        for (int i = 0; i < n; i++) {
            // Odd length palindrome
            expand(i, i);
            // Even length palindrome
            expand(i, i + 1);
        }
        
        return s.substr(start, maxLen);
    }

int main() {
    string s = "babad";
    cout << longestPalindrome(s) << endl;  
    return 0;
}
