#include<bits/stdc++.h>
using namespace std;

void p_subset(string &in, string op,int index)
{
    if(in.size()==index)
    {
        cout<<op<<"!";
        return;
    }
    
    p_subset(in,op+in[index],index+1);
    p_subset(in,op,index+1);
    return;
}
int main()
{
string in;
string op=" ";
cout<<"Enter a string:"<<endl;
cin>>in;
int index=0;
p_subset(in,op,index);
return 0;
}
