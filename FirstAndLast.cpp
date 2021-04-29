class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr1(2,-1);
        int l= nums.size();
        for(int i=0;i<l;i++)
        {
            if(target==nums[i])
            {
                if(arr1[0]==-1)
                arr1[0]=i;
                arr1[1]=i;
            }
           
        }
        return arr1;
        
    }
};
