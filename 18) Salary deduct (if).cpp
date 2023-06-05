#include<iostream>
using namespace std;
int main ()
{
	float sal, tax;
	cout<<"Enter salary= ";
	cin>>sal;
	if(sal>=20000)
	{ tax = sal*(7.0/100.0);
	  sal = sal-tax;
	}
	if(sal>=10000 && sal<20000)
	{ sal = sal-1000;
	}
	if(sal<10000)
	{ sal = sal;
	}
		cout<<sal<<" is the net salary";
	return 0;

}