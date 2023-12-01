#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Input one character:";
	cin>>ch;
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	   cout<<ch<<" is an alphabet";
	else
	   cout<<ch<<" is not an alphabet";
}
