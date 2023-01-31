#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n), where n is the number of elements in nums.
// Space complexity: O(n), where n is the number of elements in nums.
class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for (const int& num : nums) {
      if (s.count(num)) return true;
      s.insert(num);
    }
    return false;
  }
};
