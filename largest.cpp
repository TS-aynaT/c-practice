bool solve(vector<int>& nums) {
    int len=nums.size();
    sort(nums.begin(),nums.end());
    int temp=0;
    temp=nums[len-2];
    if(2*temp<nums[len-1])
    return true;
    else 
    return false;
}
