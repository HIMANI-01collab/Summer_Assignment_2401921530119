#include<vector>
using namespace std;



class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size(),m=nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    int temp=j;
                    while(temp<m){
                        if(nums2[temp]>nums2[j]){ 
                            ans.push_back(nums2[temp]);
                            break;
                        }    
                        temp++;
                    }
                    if(temp==m) ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};