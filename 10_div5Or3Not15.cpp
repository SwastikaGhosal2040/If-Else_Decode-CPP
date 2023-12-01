//Take positive integer input and tell if it is divisible by 5 or 3 
//but not divisible by 15
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Take positive integer input: ";
	cin>>num;
	if((num%5==0 || num%3==0) && (num%15 != 0))
       cout<<num<<" is divisible by 5 or 3 but not 15";

    else
     cout<<"Not matching condition";
      
	
}
