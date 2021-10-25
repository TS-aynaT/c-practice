class Solution {
public:
    int search(vector<int>& nums, int target)
    {
       int mid=0,s=0,l=0;
        l=nums.size()-1;  
        while(s<=l)
        {
             mid=(s+l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                l=mid-1;
            else
                s=mid+1;
        }
        return -1;
    }
};
