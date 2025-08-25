#include<iostream>
#include<vector>
using namespace std;

void permute(string &s, int l, int r) {
    if (l == r) {
        cout << s << "\n";  // print directly
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);         // fix one character
        permute(s, l + 1, r);     // permute remaining
        swap(s[l], s[i]);         // restore original string
    }
}

int main() {
    string s = "abc";
    permute(s, 0, s.size() - 1);
    return 0;
}