#include<string>
#include<algorithm>
using namespace std;



class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        while(r<n){
            if(s[r]==' '){
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
            else if(r==n-1){
                    reverse(s.begin()+l,s.begin()+r+1);
                }
            r++;
        }
        return s;
    }
};