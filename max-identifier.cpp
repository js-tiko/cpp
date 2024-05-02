#include<iostream>
using namespace std;
int main(){
	
	int n1 , n2 , n3;
	
	//program to find the maximum number 
	
	cout<<"Enter three numbers "<<endl;
	cout<<" First number = ";
	cin>>n1;
	cout<<"Second number = ";
	cin>>n2;
	cout<<"Third number = ";
	cin>>n3;
	
	//if else statement to find the maximum number from three numbers
	
	if(n1>n2 && n1>n3){
		
		cout<<"maximum number is ="<<n1;
		
	}
	else if(n2>n1 && n2>n3){
		
		cout<<"maximum number is = "<<n2;
		
	}
	else{
		cout<<"maximum number is = "<<n3;
	}

return 0;
}

