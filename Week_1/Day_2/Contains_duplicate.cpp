//Contains duplicate
//Time complexity: O(N)
//Space complexity: O(N)
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            if(mpp.find(a)!=mpp.end()) return true;
            mpp[a]=i;
        }
        return false;
    }
};