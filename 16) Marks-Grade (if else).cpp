#include <iostream>
using namespace std;
int main()
{
	int m;
	cout<<"Enter Marks= ";
	cin>>m;
	if(m>=85)
	{cout<<"Grade is A";	}
	else if(m>=70)
	{cout<<"Grade is B";	}
	else if(m>=60)
	{cout<<"Grade is C";	}
	else if(m>=50)
	{cout<<"Grade is D";	}
	else
	{cout<<"Grade is F";	}
	return 0;
}