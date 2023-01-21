#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> m;
    for (const string& str : strs) m[generateKey(str)].push_back(str);
    vector<vector<string>> v;
    for (const auto& [key, value] : m) v.push_back(value);
    return v;
  }

 private:
  string generateKey(string s) {
    map<char, int> m;  // Works well with Unicode. The key must be sorted.
    for (const char& c : s) ++m[c];
    string result;
    for (const auto& [key, value] : m) result += (key + to_string(value));
    return result;
  }
};
