//Program illustrating the use of switch statement
#include<iostream>
using namespace std;
int main()
{
	cout<<"Program to calculate area and perimeter of Rectangle and Square using switch function in C++ (cm)"<<endl;
	char choice;
	
	cout<<"Choose operation:"<<endl;
	cout<<"A. Area"<<endl;
	cout<<"B. Perimeter"<<endl;
	cin>>choice;
	
	switch(choice){
		case 'A':
			char choicea;
			cout<<"Choose shape to deal with Area operation:"<<endl;
			cout<<"A. Rectangle"<<endl;
			cout<<"B. Square"<<endl;
			cin>>choicea;
			
			switch(choicea){
				case 'A':
					int l,w;
					cout<<"Enter Length and Width of the Rectangle in cm:"<<endl;
					cout<<"Length: ";
					cin>>l;
					cout<<"Width: ";
					cin>>w;
					cout<<"The area of the rectangle is "<<(l*w)<<" squared cm"<<endl;
				break;
				case 'B':
				    int z;
					cout <<"Enter the side of the square:"<<endl;
					cout<<"Side: ";
					cin>>z;
					cout<<"The area of the square is "<<(z*z)<<" squared cm"<<endl;
				break;		
			}
		break;
		case 'B':
		    char choicep;
		    cout<<"Choose shape to deal with Perimeter operation:"<<endl;
		    cout<<"A. Rectangle"<<endl;
		    cout<<"B. Square"<<endl;
		    cin>>choicep;
		    
		    switch(choicep){
		    	case 'A':
		    		int l , w;
		    		cout<<"Enter length and width of the rectangle in cm:"<<endl;
		    		cout<<"Length: ";
		    		cin>>l;
		    		cout<<"Width: ";
		    		cin>>w;
		    		cout<<"The perimeter of the rectangle is "<<(2*(l + w))<<"cm"<<endl;
		    	break;
		    	case 'B':
		    		int s;
		    		cout<<"Enter the side of the square:"<<endl;
		    		cout<<"Side: ";
		    		cin>>s;
		    		cout<<"The perimeter of the square is "<<(4*s)<<"cm"<<endl;
		    	break;	
			}
		break;		
	}   	
	return 0;
}
