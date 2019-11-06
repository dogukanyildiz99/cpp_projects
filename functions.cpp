#include <iostream>
#include <cmath>
using namespace std;
int Cube(int); //signature of function
int main()
{
	for(int i=1;i<=10;i++)
	cout<<Cube(i)<<endl;
	return 0;
}
//defining the function
int Cube(int y)
{
	return pow(y,3);
}

