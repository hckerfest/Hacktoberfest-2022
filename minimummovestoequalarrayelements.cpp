class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min1=INT_MAX;
        for(int i=0;i<nums.size();i++){
            min1=min(min1,nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+(nums[i]-min1);
        }
        
        return ans;
    }
};
