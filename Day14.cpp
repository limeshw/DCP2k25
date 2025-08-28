#include<iostream>
#include<vector>
#include<string>
using namespace std;

long long substrCountExactlyK(string s, int k) {
    int n = s.size();
    long long result = 0;

    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0);
        int distinct = 0;

        for (int j = i; j < n; j++) {
            if (freq[s[j] - 'a'] == 0) {
                distinct++;
            }
            freq[s[j] - 'a']++;

            if (distinct == k) {
                result++;
            } else if (distinct > k) {
                break; // no need to continue
            }
        }
    }

    return result;
}

int main() {
    // string s;
    // int k;
    // cin >> s >> k;
    cout << substrCountExactlyK("pqpqs", 2) << endl;
    return 0;
}
