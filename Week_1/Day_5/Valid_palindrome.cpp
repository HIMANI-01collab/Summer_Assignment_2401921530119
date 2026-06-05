//Valid palindrome
//Time complexity: O(n)
//Space complexity: O(n)

#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ") return true;
        string cleaned="";
        for(char c : s){
            if(isalnum((unsigned char)c)){
                cleaned+=c;
            }
        }
        for(char &x : cleaned){
            x= tolower(x);
        }
        std::string reversed(cleaned.rbegin(),cleaned.rend());
        if(cleaned == reversed) return true;
        else return false;
        
    }
};