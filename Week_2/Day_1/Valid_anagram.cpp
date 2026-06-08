
//time complexity: O(n)
//space complexity: O(1)


#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s==t) return true;
        else if(s.size()==t.size()){
              vector<int> hash1(26,0);
              vector<int> hash2(26,0);
              for(int i=0;i<s.size();i++){
                hash1[s[i]-'a']+=1;
                hash2[t[i]-'a']+=1;
              }
              if(hash1==hash2) return true;
        }

        return false;
    }
};