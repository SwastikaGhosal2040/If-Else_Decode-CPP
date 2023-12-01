//Ques: Take positive integer input and tell if it is divisible by 5
// and 3 (using Nested if-else)(don't use && operator)

#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Take positive integer input: ";
  cin>>num;
  if(num%5==0)

    if(num%3==0)
     
       cout<<num<<" is divisible by 5 and 3 both.";
     
    else
      
        cout<<num<<" is divisible by 5, not by 3";
      
  else
    
      cout<<"Not matching condition";
    
  	
	
}
