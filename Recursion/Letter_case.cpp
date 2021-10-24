#include<bits/stdc++.h>
using namespace std;
void print_string(string in,string op,int index)
{
    if(index==in.size())
    {
        cout<<op<<endl;
        return;
    }
    char s = in[index];
    char c = toupper(in[index]);
       if(!isdigit(in[index])) print_string(in,op+c,index+1);
         print_string(in,op+s,index+1);
    return;

}
int main()
{
string in;
string op="";
cout<<"Enter s string:"<<endl;
cin>>in;
int index=0;
//int size=in.size();
print_string(in,op,index);
return 0;
}
