#include <iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;


    string reverseWords(string s) {
        // Step 1: Remove extra spaces
        int n = s.size();
        int i = 0, j = 0;
        
        // Remove leading spaces
        while (i < n && s[i] == ' ') i++;
        
        // Remove extra spaces between words
        while (i < n) {
            if (s[i] == ' ' && (j == 0 || s[j-1] == ' ')) {
                i++;
                continue;
            }
            s[j++] = s[i++];
        }
        
        // Remove trailing space if any
        if (j > 0 && s[j-1] == ' ') j--;
        
        s.resize(j);
        
        // Step 2: Split into words
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        
        // Step 3: Reverse words
        reverse(words.begin(), words.end());
        
        // Step 4: Join words
        string result;
        for (int k = 0; k < words.size(); k++) {
            if (k > 0) result += " ";
            result += words[k];
        }
        
        return result;
    }

int main() {
    string input = "  the   sky is  blue ";
    cout <<reverseWords(input) << endl; // Output: "blue is sky the"
    return 0;
}
