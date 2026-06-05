//Longest common prefix
//Time complexity: O(nlogn . m)   
//Space complexity: O(m)
//n-> number of strings in vector strs
//m-> length of string

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string s="";
        const string& a=strs[0];
        const string& b=strs[strs.size()-1];
        size_t n=max(a.size(),b.size());
        for(size_t i=0;i<n;i++){
            if(i>=a.size() || i>b.size()){
                break;
            }
            char c1=a[i];
            char c2=b[i];
            if(c1==c2) s+=c2;
            else break;
        }
        return s;
    }
};