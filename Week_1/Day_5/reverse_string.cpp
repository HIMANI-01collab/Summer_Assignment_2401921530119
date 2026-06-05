//Reverse string
//Time complexity: O(n)
//Space complexity: O(1)


#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size();
        int l= 0;
        int r= n-1;
        while(l<=r){
            swap(s[l],s[r]);
            r--;
            l++;
        }
        
    }
};