int solve(vector<int>& nums) {
    int a = nums.size();
    int count = 0;
    int r=0, x=0;
    for( int i=0;i<a;i++)
    {    r=nums[i];
            count=0;
        for (int j=0;j<a;j++)
        {
            if(r==nums[j])
            count+=1;
        }
        if(x<count)
        x=count;
    }
    return x;
}
