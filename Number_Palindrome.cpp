bool solve(int num) {
    int t=0;
       vector<int> arr;
      
   while(num!=0)
   {
       int r=num%10;
       arr.push_back(r);
      num = num/10;
       t+=1;
      // cout<<t<<endl;
       
   }
 vector<int> a2(t+1);
   for(int i=0; i<t ;i++)
   {
       a2[i]= arr[t-i-1];
   }
   
   for(int j=0;j<t;j++)
   {
       if(a2[j]!=arr[j])
           return false;
     
   }
   return true;
}
