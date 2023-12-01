//Take a positive integer input and tell if it is a 3 digit number or not
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Input a positive integer:";
	cin>>num;
	if(num>=100 && num<=999)
	  cout<<num<<" is a 3 digit number";
	else
	  cout<<num<<" not a 3 digit number";
}
