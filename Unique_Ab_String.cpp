int solve(string s) {
    int len= s.size();
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
        count+=1;
    }
    int temp=0;
    temp=pow(2,count);
    return temp;
    
}
