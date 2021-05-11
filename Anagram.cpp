bool solve(string s0, string s1) {
    int x= s0.size();
    int y= s1.size();
    sort(s0.begin(),s0.end());
    sort(s1.begin(),s1.end());
    if(x!=y)
    return false;
    int z=s0.compare(s1);
    if(z==0)
    return true;
    else
    return false;
    
}
