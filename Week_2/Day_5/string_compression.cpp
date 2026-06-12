

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size(), write = 0;
        for (int i = 0; i < n; i++) {
            char c = chars[i];
            int cnt = 0;
            while (i < n && chars[i] == c) {
                i++;
                cnt++;
            }
            chars[write++] = c;
            if (cnt > 1) {
                string t = to_string(cnt);
                for (char x : t) chars[write++] = x;
            }
            i--;
        }
        return write;
    }
};