#include <bits/stdc++.h>

using namespace std;

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
