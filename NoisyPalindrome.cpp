bool solve(string s) {
    int a = s.size();
    vector<char> a1,b1;
    for(int i=0;i<a;i++)
    {
        if(islower(s[i]))
        a1.push_back(s[i]);
    }
    int b= a1.size();
    for(int j=b-1;j>=0;j--)
    {
        b1.push_back(a1[j]);
    }
    if(a1==b1)
    return true;
    else
    return false;
}
