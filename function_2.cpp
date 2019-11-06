#include <iostream>
using namespace std;
int Func(int,int); 
int main()
{
	int a,b;
	cout<<"Please enter A and B: ";
	cin>>a>>b;
	
	while(a==0)
	{
		cout<<"A has to be different from 0, enter again: ";
		cin>>a;
	}
	
	cout<<"The result is "<<Func(a,b)<<endl;
	
	return 0;
}
int Func(int a, int b)
{
	return (-b/a);
}

