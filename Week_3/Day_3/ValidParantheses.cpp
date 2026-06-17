#include<stack>
#include<string>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        int flag=0;
        if(n%2 !=0) return false;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                 if(st.empty()) return false;
                 else{
                    if(st.top()=='(' && s[i]!=')') return false;
                    else if(st.top()=='[' && s[i]!=']') return false; 
                    else if(st.top()=='{' && s[i]!='}') return false; 
                    st.pop();
                 }    
            } 
        }
        if(st.empty()) return true;
        return false;
    }
};