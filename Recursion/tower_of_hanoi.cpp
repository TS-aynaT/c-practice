#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int s,int h, int d,int n,int &count)
{
    count++;
    if(n==1)
    {
        cout<<"ring is transfered from "<<s<<" "<<"to "<<d<<endl;
        //count+=1;
        return;
    }
    tower_of_hanoi(s,d,h,n-1,count);
    cout<<"ring is transfered from "<<s<<" "<<"to "<<d<<endl;
    tower_of_hanoi(h,s,d,n-1,count);
    
}
int main()
{
int n;
int count=0;
cout<<"Enter number of rings:"<<endl;
cin>>n;
int s=1;
int h=2; 
int d=3;
tower_of_hanoi(s,h,d,n,count);
cout<<count;
return 0;
}
