#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n), where n is the number of elements in nums.
// Space complexity: O(n), where n is the number of elements in nums.
class Solution {
 public:
  int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int maxStreak = 0;
    for (const int& num : nums) {
      if (!s.count(num - 1)) {
        int currentStreak = 1;
        while (s.count(num + currentStreak)) ++currentStreak;
        maxStreak = max(maxStreak, currentStreak);
      }
    }
    return maxStreak;
  }
};
