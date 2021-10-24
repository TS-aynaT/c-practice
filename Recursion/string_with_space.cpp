#include<bits/stdc++.h>
using namespace std;

void p_subset(string &in, string op, int index, int size)
{
    if(index==size)
    {
        cout<<op<<" ";
        return;
    }
    op=op+in[index];
    if(index != size-1) p_subset(in,op+"_",index+1, size);
    p_subset(in,op,index+1,size);
    return;
}
int main()
{
string in;
string op=" ";
cout<<"Enter a string:"<<endl;
cin>>in;
int index=0;
int size = in.size();
p_subset(in,op,index,size);
return 0;
}
