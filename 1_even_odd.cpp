//even odd
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Take a positive integer input:";
	cin>>num;
	if(num % 2 == 0)
	  cout<<num<<" is even number";
	else
	  cout<<num<<" is odd number";
}
