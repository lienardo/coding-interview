#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n), where n is the number of elements in nums.
// Space complexity: O(1), v is excluded.
class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> v(nums.size(), 1);
    int prefix = 1;
    for (int i = 0; i < nums.size(); ++i) {
      v[i] *= prefix;
      prefix *= nums[i];
    }
    int suffix = 1;
    for (int i = nums.size() - 1; i >= 0; --i) {
      v[i] *= suffix;
      suffix *= nums[i];
    }
    return v;
  }
};
