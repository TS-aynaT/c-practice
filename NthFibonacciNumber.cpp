int solve(int n) {
    vector<int> arr(n);
    if(n==1||n==2)
        return 1;
    else
        {
            arr[0]=1;
            arr[1]=1;
            for(int i=2;i<n;i++)
            {
                arr[i]=arr[i-1]+arr[i-2];
            }
        }
    return arr[n-1];
}
