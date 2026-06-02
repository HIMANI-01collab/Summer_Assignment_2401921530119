//Two Sum

#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Time complexity: O(N^2)
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if ((nums[i]+nums[j])==target) {
                   return {i,j};
                }
            }
        }
        return {};
        
        /*
        //Time complexity: O(NlogN)
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int more=target-a;
            if(mpp.find(more)!=mpp.end()) return {mpp[more],i};
            mpp[a]=i;
        }
        return {};
        */

    }
};