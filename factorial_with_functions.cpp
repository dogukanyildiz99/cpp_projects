#include <iostream>
using namespace std;
int Factorial(int);
int main()
{
	for(int i=0;i<=10;i++)
	cout<<i<<"! = "<<Factorial(i)<<endl;
	return 0;
}

int Factorial(int sayi)
{
	if(sayi<=1)
	return 1;
	else
	return sayi*Factorial(sayi-1);
}
