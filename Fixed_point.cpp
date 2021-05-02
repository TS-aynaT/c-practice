int solve(vector<int>& nums) {
    int l= nums.size();
    //vector<int> arr;
    for(int i=0;i<l;i++)
    {
        if(nums[i]==i)
            return i;
    }
    return -1;
}  
