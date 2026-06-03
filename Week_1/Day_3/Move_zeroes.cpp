//Move Zeroes
//Time complexity:: O(n^2)
//Space complexity:: O(1)
#include <vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]==0){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        
        /*
        //two pointer approach
        //Time complexity:: O(n)
        //Space complexity:: O(1)
        
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        */
        
    }
};