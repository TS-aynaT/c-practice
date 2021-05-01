class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int c=0,a=0,m=0;
      int l=nums.size();
        for(int i=0;i<l;i++)
        {
            if(nums[i]==1)
                c+=1;
             else 
             {
                m=max(a,c);
                 a=m;
                 c=0;
              }
        }
        return max(a,c);
    }
   };
