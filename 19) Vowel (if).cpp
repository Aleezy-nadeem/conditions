#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character= ";
	cin>>ch;
	if(ch=='a' || ch== 'A')
	{ cout<<ch<<" is a vowel";
	}
	if(ch=='e' || ch=='E')
	{ cout<<ch<<" is a vowel";
	}
	if(ch=='i' || ch=='I')
	{ cout<<ch<<" is a vowel";
	}
	if(ch=='o' || ch=='O')
	{ cout<<ch<<" is a vowel";
	}
	if(ch=='u' || ch=='U')
	{ cout<<ch<<" is a vowel";
	}
	if(!(ch=='a' || ch=='A') && !(ch=='e' || ch=='E') && !(ch=='i' || ch=='I') && !(ch=='o' || ch=='O') && !(ch=='u' || ch=='U'))
	{cout<<ch<<" is not a vowel";
	}
	return 0;
}
	