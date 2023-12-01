#include<iostream>
using namespace std;
int main()
{
	float cp;
	cout<<"Enter cost price:";
	cin>>cp;
	
	float sp;
	cout<<"Enter selling price:";
	cin>>sp;
	
	float profit = sp -cp;
	float loss = cp -sp;
	if(sp>cp)
	  cout<<"Profit amount: "<<profit;
	else if(cp>sp) 
	  cout<<"Loss amount: "<<loss;
	else
	  cout<<"No profit, no loss";
}
