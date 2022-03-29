#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int ch;
	cout<<"enter your choice"<<"\n";
	cout<<"1.addition"<<"\n";
	cout<<"2.substraction"<<"\n";
	cout<<"3.multiplication"<<"\n";
	cout<<"4.division"<<"\n";
	cin>>ch;

	cout<<"enter two number:"<<"\n";
	cin>>a>>b;
	switch(ch)
	{
		case 1:
		cout<<"addition:"<<a+b;
		break;


		case 2:
		cout<<"substrction;"<<a-b;
		break;


		case 3:
		cout<<"multiplication:"<<a*b;
		break;


		case 4:
		cout<<"division:"<<a/b;
		break;

	}
	return 0;
}