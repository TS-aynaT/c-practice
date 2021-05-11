bool solve(vector<int>& nums, vector<int>& target) {
    int x= nums.size();
    int y= target.size();
    int count=0;
  sort(nums.begin(), nums.end());
  sort(target.begin(),target.end());
    if(x==y)
    {
        for(int i=0;i<x;i++)
        {
                if(nums[i]!=target[i])
                return false;
        }
    }
    else if(x!=y)
   { return false;}
   return true;
}

    bool solve(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if( a == b ) return true;
    else return false;
}



