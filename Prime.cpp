vector<int> solve(int n) {
    int j=0;
    vector<int> arr;
    
        for(j=2;j<=sqrt(n);j++)
        {
            while(n%j==0)
            {
                arr.push_back(j);
                n=n/j;
            }
        }
        if(n!=1)
        arr.push_back(n);
    return arr;
}
