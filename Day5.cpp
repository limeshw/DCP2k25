#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = INT_MIN;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    // Reverse to maintain original order
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(arr);

    cout << "Leaders: ";
    for (int x : result) cout << x << " ";
}
