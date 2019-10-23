#include<iostream>
using namespace std;
int main()
{
	int x, y, z, enBuyuk;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	cout<<"Enter the third number: ";
	cin>>z;
	enBuyuk=x;
	if(y>enBuyuk)
	enBuyuk=y;
	if(z>enBuyuk)
	enBuyuk=z;
	cout<<enBuyuk<<endl;
	return 0;
}

