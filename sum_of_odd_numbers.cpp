#include <iostream>
using namespace std;
int main()
{
	int i;
	int sum=0;
	int sayac=1;
	for(i=1;i<=10;i+=2)
	{
		sum=sum+i;
		sayac=sayac++;	
	}
	cout<<"Sum of odd numbers between 1 and  10 are: "<<sum;
	
	return 0;
	
}
