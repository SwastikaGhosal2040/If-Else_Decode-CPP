//absolute value
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Take an integer input:";
	cin>>num;
	if(num<0)
	  num = -num;
	cout<<"Absolute value is:"<<num;
}
