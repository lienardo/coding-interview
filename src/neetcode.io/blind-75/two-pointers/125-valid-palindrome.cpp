#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n), where n is the number of characters in s.
// Space complexity: O(1).
class Solution {
 public:
  bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
      while (!iswalnum(s[i]) && i < j) ++i;
      while (!iswalnum(s[j]) && i < j) --j;
      if (tolower(s[i]) != tolower(s[j])) return false;
      ++i;
      --j;
    }
    return true;
  }
};
