void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int i= arr.size();
    int s1=0,s2=0;
    for(int j=0;j<=i-2;j++)
    {
       s1+=arr[j] ;
    }
    for(int k=1;k<=i-1;k++)
    {
        s2+=arr[k];
    }
    cout<<s1<<" "<<s2;
}
