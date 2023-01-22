#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n), where n is the number of elements in nums.
// Space complexity: O(n), where n is the number of elements in nums.
class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i) {
      int complement = target - nums[i];
      if (m.count(complement)) return {m[complement], i};
      m[nums[i]] = i;
    }
    return {};
  }
};
