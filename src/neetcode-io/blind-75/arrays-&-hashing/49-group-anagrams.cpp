#include <bits/stdc++.h>

using namespace std;

// Time complexity: O(mn), where m is the number of elements in strs and n is
// the number of characters in str.
// Space complexity: O(mn), where m is the number of elements in strs and n is
// the number of characters in str.
class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> m;
    for (const string& str : strs) m[generateKey(str)].push_back(str);
    vector<vector<string>> v;
    for (const auto& [key, value] : m) v.push_back(value);
    return v;
  }

  // Time complexity: O(n), where n is the number of characters in s.
  // Space complexity: O(1), the maximum number of pairs in m is 26 and the
  // maximum characters in result is 'aXbY...zZ', where X, Y, ..., and Z
  // respectively denote the number of occurrences of a, b, ..., and z.
 private:
  string generateKey(string s) {
    map<char, int> m;  // Works well with Unicode. The key must be sorted.
    for (const char& c : s) ++m[c];
    string result;
    for (const auto& [key, value] : m) result += (key + to_string(value));
    return result;
  }
};
