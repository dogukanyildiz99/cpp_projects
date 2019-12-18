#include <iostream>
#include <iomanip> //to use setw
#include <cstdlib>
using namespace std;
int main()
{
	int a,b;
	int n[]={ 10, 20, 30, 40, 50 };
	cout<<"Line"<<setw(11)<<"Value"<<endl;
	for(int i=0; i<5; i++)
	{
	cout<<setw(2)<<i+1<<setw(11)<<n[i]<<endl;
}
	cout<<"Please enter value and the line you would like to change: ";
	cin>>a>>b;
	n[b-1]=a;
	
	for(int j=0; j<5; j++)
	{
	cout<<setw(3)<<j+1<<setw(12)<<n[j]<<endl;
}
	return 0;
}

