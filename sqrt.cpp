#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	double A,B,C,D,X,X1,X2;
	cout<<"A, B ve C deðerlerini giriniz: ";
	cin>>A>>B>>C;
	D= pow(B,2)-4*A*C;
	if(D<0)
	{
		cout<<"Kökler Sanaldýr.";
	}
	else if(D>0)
	{
		X1=((-B+sqrt(D))/(2*A));
		X2=((-B-sqrt(D))/(2*A));
		cout<<"Kökler "<<X1<<" ve "<<X2<<" deðerleridir.";
	}
	else
	{
		X=((-B)/(2*A));
		cout<<"Kök "<<X<<" deðeridir.";
	}
	
return 0;
}

