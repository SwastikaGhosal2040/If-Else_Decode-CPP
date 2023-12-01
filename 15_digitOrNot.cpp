#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	if(ch>=48 && ch<=57)  cout<<ch<<" is a digit";
	else  cout<<ch<<" is not a digit";
}
