class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a=nums.size();
        int r=0,c1=0,c2=0;
        for(int i=0;i<a;i++)
        {
            c1=0;
            while(nums[i]!=0)
            {
               r=nums[i]%10;
                c1+=1;
                nums[i]=nums[i]/10;
            }
            if(c1%2==0)
                c2+=1;
        }
        return c2;
        
    }
};
