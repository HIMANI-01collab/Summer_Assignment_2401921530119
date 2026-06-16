#include <bits/stdc++.h>
#include<string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int resLength=0;
        string res="";
        int l,r;
        for(int i=0;i<n;i++){
            //odd length palindrome 
                l=i,r=i;
                while(l>=0 && r< n && s[l]==s[r]){
                    if(r-l+1 > resLength){
                        res=s.substr(l,r-l+1);
                        resLength=r-l+1;
                    }
                    l--;
                    r++;
                } 
            //even length palindrome    
                l=i,r=i+1;
                while(l>=0 && r< n && s[l]==s[r]){
                    if(r-l+1 > resLength){
                        res=s.substr(l,r-l+1);
                        resLength=r-l+1;
                    }
                    l--;
                    r++;
                }  
        }  
        return res;
    }
};