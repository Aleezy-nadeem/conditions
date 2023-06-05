#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter Year= ";
	cin>>a;
	if(a%4==0)
		{cout<<a<<" is a Leap Year";}
	else
		{cout<<a<<" is not a Leap Year";}
	return 0;
}