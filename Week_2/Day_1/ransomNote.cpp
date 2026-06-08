
//time complexity: O(m+r+r)-> O(m+r) or O(n)
//space complexity: O(1)

#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r= ransomNote.size();
        int m= magazine.size();
        int count=0;
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        for(int i=0;i<m;i++){
            hash2[magazine[i]-'a']+=1;
        }
        for(int i=0;i<r;i++){
         hash1[ransomNote[i]-'a']+=1;
        }
        for(char c: ransomNote){
           if((hash1[c-'a']<=hash2[c-'a']) && (hash1[c-'a']!=0)) count++;
        }
        if(count==r)  return true;
        return false;
    }
};