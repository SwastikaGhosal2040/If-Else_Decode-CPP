#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
    if((ch<=90 && ch>=65) || (ch<=122 && ch>=97))
    {
    	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    	 {
    	 	cout<<ch<<" is a vowel ";
		 }
		else
		{
			cout<<ch<<" is a consonant";
		}
		
	}
	else
	 {
	 	cout<<"The character is not an alphabet";
	 }
}
