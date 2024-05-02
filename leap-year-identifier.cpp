#include<iostream>
using namespace std;
int main(){

  int  n;
  
  //program to determine leap year
  
  cout<<"Enter a year "<<endl;
  cin>>n;
  
  if(n%4==0){
  	cout<<"The year is leap "<<endl;
  }
  else{
  	cout<<"The year is odinary"<<endl;
  }
  
  return 0;
  
}

