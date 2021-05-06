string solve(string s) {
    int len=s.size();
    if(len==1)
    return s;
    string a;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[i+1])
        a.push_back(s[i]);
    }
    return a;
}
