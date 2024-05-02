//Minimum number identifier
#include<iostream>
using namespace std;
int main(){
	
	cout<<"Program to identify minimum number among three numbers"<<endl;
	
	int a, b, c;
	
	cout<<"Enter three numbers to deal with:"<<endl;
	cout<<"First number: ";
	cin>>a;
	cout<<"Second number: ";
	cin>>b;
	cout<<"Third number: ";
	cin>>c;
	
	//Main execution
	
	if(a<b && a<c){
		cout<<a<<" is the minimum number"<<endl;
		cout<<"Have a good time! :)";
	}
	else if(b<a && b<c){
		cout<<b<<" is the minimum number"<<endl;
		cout<<"Have a good time! :)";
	}
	else{
		cout<<c<<" is the minimum number:"<<endl;
		cout<<"Have a good time! :)";
	}
	return 0;
}

