
//time complexity: O(n)
//space complexity: O(1)



#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> hash(26,0);
        int n = s.size();
        for(int i=0;i< n;i++){
            hash[s[i]-'a']+=1;
        }
        for(int j=0;j<n;j++){
            if(hash[s[j]-'a']==1){
                return j;
            }
        }
        return -1;
    }
};
