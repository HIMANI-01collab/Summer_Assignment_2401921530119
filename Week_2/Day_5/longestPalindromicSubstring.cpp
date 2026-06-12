#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string pali_sub = "";
        for (int i = 0; i < s.size(); i++) {
            string p1 = expand(s, i, i);
            string p2 = expand(s, i, i + 1);

            if (p1.size() > pali_sub.size()) pali_sub = p1;
            if (p2.size() > pali_sub.size()) pali_sub = p2;
        }

        return pali_sub;
    }
    string expand(string &s, int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }
};