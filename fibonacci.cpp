#include <iostream>
using namespace std;
int Fibonacci(int);
int main()
{
	for(int i=1;i<=20;i++)
	cout<<i<<".number "<<Fibonacci(i)<<endl;
	return 0;
}

int Fibonacci(int sayi)
{
	if(sayi==1)
	return 0;
	if(sayi==2)
	return 1;
	else
	return Fibonacci(sayi-1)+Fibonacci(sayi-2);
}

