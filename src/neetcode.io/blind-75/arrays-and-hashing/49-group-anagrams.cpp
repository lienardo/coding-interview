#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> m;
    for (string str : strs) m[generateKey(str)].push_back(str);
    vector<vector<string>> v;
    for (auto it : m) v.push_back(it.second);
    return v;
  }

 private:
  string generateKey(string s) {
    map<char, int> m;  // Works well with Unicode. The key must be sorted.
    for (char& c : s) ++m[c];
    string key;
    for (auto it : m) key += (it.first + to_string(it.second));
    return key;
  }
};
