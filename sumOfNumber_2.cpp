#include <iostream>
using namespace std;
int main()
{
	int num,dig,sum;
	cout<<"Number: ";
	cin>>num;
	for(int i=10;i<=(num*10);i=i*10)
	{
		dig=((num%i)/(i/10));
		sum=sum+dig;
	}
	cout<<"Sum of the digits are: "<<sum;
	return 0;
}
