#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(n), where n is the number of characters in s or t.
// Space complexity: O(1), the maximum number of pairs in m is 26.
class Solution {
 public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    unordered_map<char, int> m;  // Use unordered map for Unicode, vector of
                                 // size 26 for lowercase.
    for (const char& c : s) ++m[c];
    for (const char& c : t)
      if (--m[c] < 0) return false;
    return true;
  }
};
