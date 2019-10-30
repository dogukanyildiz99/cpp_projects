#include <iostream>
using namespace std;
int main()
{
	int n,a,b,c,sum,kalan;
	cout<<"Please enter a three digit number: ";
	cin>>n;
	while(n<100||n>999)
	{
		cout<<"Please enter a THREE digit number: ";
		cin>>n;		
	}
	kalan=n%100;
	a=n/100;
	b=kalan/10;
	c=n%10;
	
	sum=a+b+c;
	cout<<"Sum of three digits are: "<<sum;
	
return 0;	
}

