vector<int> solve(vector<int>& nums) {
    int a= nums.size();
    int x=0;
    for(int i=0;i<a;i++)
    {
        nums[i]=nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    return nums;
}
