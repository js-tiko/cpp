//Simple calculator 
#include<iostream>
using namespace std;
int main()
{
	cout<<"Simple and fast calculator for Sum, Difference, Multiplication and Division of two numbers"<<endl;
	
	int choice;
	
	cout<<"Chose operation here:"<<endl;
	cout<<"1. Sum"<<endl;
	cout<<"2. Difference"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<" "<<endl;
	cout<<"Operation: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			int a,b;
			cout<<"Enter the two numbers to deal with Sum Operation:"<<endl;
			cout<<"First number: ";
			cin>>a;
			cout<<"Second number: ";
			cin>>b;
			cout<<"The Sum of "<<a<<" and "<<b<<" is "<<(a + b)<<endl;
			cout<<"Have a good time! :)"<<endl;
		break;
		case 2:
			int c,d;
			cout<<"Enter the two numbers to deal with the Difference operation:"<<endl;
			cout<<"First number: ";
			cin>>c;
			cout<<"Second number: ";
			cin>>d;
			cout<<"The Difference of "<<c<<" and "<<d<<" is "<<(c - d)<<endl;
			cout<<"Have a good time! :)"<<endl;
		break;	
		case 3:
			int e,f;
			cout<<"Enter the two numbers to deal with the Multiplication operation:"<<endl;
			cout<<"First number: ";
			cin>>e;
			cout<<"Second number: ";
			cin>>f;
			cout<<"The Product of "<<e<<" and "<<f<<" is "<<(e * f)<<endl;
			cout<<"Have a good time! :)"<<endl;
		break;
		case 4:
			int g,h;
			cout<<"Enter the two numbers to deal with the Division operation:"<<endl;
			cout<<"First number: ";
			cin>>g;
			cout<<"Second number : ";
			cin>>h;
			cout<<"The quotient of "<<g<<" and "<<h<<" is "<<(g / h)<<endl;
			cout<<"Have a good time! :)"<<endl;
		break;	
	}
	return 0;
}
