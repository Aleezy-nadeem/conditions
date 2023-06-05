#include <iostream>
using namespace std;
int main()
{
	int g;
	float s, b;
	cout<<"Enter Salary and Grade= ";
	cin>>s>>g;
	if(g>15)
	   {b= s*(50.0/100.0);
	   s= s+b;}
	else
	   {b= s*(25.0/100.0);
	   s= s+b;}
	cout<<"\nSalary = "<<s;
	return 0;
}