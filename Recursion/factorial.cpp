#include <iostream>
using namespace std;

void fact(int num)
	{
	    if(num==1)
	        {
	             return 1;
	        }
	       return fact(num-1)*(num);
	        
	}
int main() 
{
    int num=0;
	cout<<"Enter a number";
	cin>>num;
	cout<<fact(num);
	
	return 0;
}
