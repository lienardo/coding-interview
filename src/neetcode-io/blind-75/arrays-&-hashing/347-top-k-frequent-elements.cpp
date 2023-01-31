#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n), where n is the number of elements in nums.
// Space complexity: O(n), where n is the number of elements in nums.
class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    for (const int& num : nums) ++m[num];
    vector<vector<int>> v(nums.size());
    for (const auto& [key, value] : m) v[value - 1].push_back(key);
    vector<int> result;
    for (int i = v.size() - 1; i >= 0; --i) {
      for (const int& x : v[i]) {
        if (result.size() == k) return result;
        result.push_back(x);
      }
    }
    return result;
  }
};
