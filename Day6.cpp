#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<unordered_map>
using namespace std;

vector<pair<int, int>> findZeroSumSubarrays(vector<int>& arr) {
    unordered_map<int, vector<int>> prefixMap;
    vector<pair<int, int>> result;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        // If prefix sum itself is zero, subarray from 0..i
        if (sum == 0) {
            result.push_back({0, i});
        }

        // If this prefix sum was seen before, subarray from (prev_index+1 ... i)
        if (prefixMap.find(sum) != prefixMap.end()) {
            for (int idx : prefixMap[sum]) {
                result.push_back({idx + 1, i});
            }
        }

        // Store this index for current sum
        prefixMap[sum].push_back(i);
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    vector<pair<int, int>> res = findZeroSumSubarrays(arr);

    if (res.empty()) {
        cout << "No subarrays with zero sum\n";
    } else {
        cout << "Zero-sum subarrays: \n";
        for (auto p : res) {
            cout << "(" << p.first << ", " << p.second << ")\n";
        }
    }
    return 0;
}
