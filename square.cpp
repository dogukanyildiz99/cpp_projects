#include <iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter a length for square: ";
	cin>>number;
	for(int i=0; i<number; i++)
{
	
	cout<<"*";
	for(int j=0; j<number;j++)
	{
		cout<<"*";
	}
	cout<<"\n";
}
return 0;
}
