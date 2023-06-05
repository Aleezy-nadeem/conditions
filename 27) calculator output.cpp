#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a, b;
	char op, choice;
	loop:
	system("cls");
	cout<<"Enter first number= ";
	cin>>a;
	cout<<"\nEnter second number= ";
	cin>>b;
	cout<<"\n\n+ to add\n- to subtract\n* to multiply\n/ to divide\n= ";
	cin>>op;
	switch (op)
		{
		case '+':
			cout<<a<<"+"<<b<<"= "<<a+b;
			break;
		case '-':
			cout<<a<<"-"<<b<<"= "<<a-b;
			break;
		case '*':
			cout<<a<<"X"<<b<<"= "<<a*b;
			break;
		case '/':
			if(b!=0)
				cout<<a<<"/"<<b<<"= "<<a/b;
			else
				cout<<"Invalid Number";
			break;
		default:
			cout<<"Invalid Operator";
		
		}
	cout<<"\nDo you want to calculate again= Y\\N  ";
	cin>>choice;
	if(choice=='y'|| choice=='Y')
			goto loop;
	
}