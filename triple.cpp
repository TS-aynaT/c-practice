bool solve(vector<int>& nums) {
    int len = nums.size();
    sort(nums.begin(),nums.end());
    int temp;
    if(len==1)
    return false;
    for(int j=0;j<len;j++)
    {
    temp=3*nums[j];
    {
    for(int i=0; i<len; i++)
    {
        
        if(temp==nums[i] && i!=j)
            return true;
    }
    }  }
    return false;
}
