#include <iostream>
using namespace std;
int main()
{
	int n=0;
	int d=0;
	int sum=0;
	cout<<"Please enter a number: ";
	cin>>n;
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;	
	}
	cout<<"Sum of the digits are: "<<sum;
	
return 0;	
}

