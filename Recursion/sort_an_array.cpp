// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &num, int temp)
{
    int n2=num.size();
    if(n2==0 || num[n2-1]<=temp)
    {
        num.push_back(temp);
        return;
    }
    int val= num[n2-1];
    num.pop_back();
    insert(num,temp);
    num.push_back(val);
    
}
void sort(vector<int> &num)
{
    if(num.size()==1)
     return;
    
    int n = num.size();
    int temp = num[n-1];
    num.pop_back();
    sort(num);
    insert(num,temp);
}


int main()
{

vector<int> num = {5,3,1,6,0};
sort(num);
for (auto n: num)
cout<<n<<" ";
return 0;
}
