#include<iostream>
using namespace std;
int main ()
{
	int a, b, c, d, e, min, max;
	cout<<"Enter 5 Integers= ";
	cin>>a>>b>>c>>d>>e;
	min=max=a;
		if(a>max)
	 	  { max = a;}
		if(b>max)
		  { max = b;}
		if(c>max)
		  { max = c;}
		if(d>max)
		  { max = d;}
		if(e>max)
		  { max = e;}
		if(a<min)
		  { min = a;}
		if(b<min)
		  { min = b;}
		if(c<min)
		  { min = c;}
		if(d<min)
		  { min = d;}
		if(e<min)
		  { min = e;}
	cout<<min<<" is the minimum number\n";
	cout<<max<<" is the maximum number";
		return 0;
}