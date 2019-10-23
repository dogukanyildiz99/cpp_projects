#include<iostream>
using namespace std;
int main()
{
	int A,B,X;
	cout<<"Enter the A integer: ";
	cin>>A;
	while(A==0)
  {
	cout<<"Please enter again. ";
	cin>>A;
  }	
	cout<<"\nEnter the B integer: ";
	cin>>B;
	X=-B/A;
	cout<<"\nThe result of X is"<<X<<endl;
return 0;
}
