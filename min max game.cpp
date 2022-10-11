class Solution {
public:
int minMaxGame(vector& nums) 
{
  vector newNums;
  int size=nums.size();
  if (nums.size()==1)
  {
    return nums[0];
  }
  else
  {
    while(size!=1)
    {
      for(int i=0;i<nums.size()/2;i++)
      {
        if(i%2==0)
        {
          newNums.push_back(min(nums[2 * i], nums[2 * i + 1]));
        }
        if(i%2==1)
        {
          newNums.push_back(max(nums[2 * i], nums[2 * i + 1]));
        }
    }
   nums=newNums;
   newNums.clear();
   size/=2;
    }
  return nums[0];
    }

  }
};
