#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	double A,B,C,D,X,X1,X2;
	cout<<"A, B ve C de�erlerini giriniz: ";
	cin>>A>>B>>C;
	D= pow(B,2)-4*A*C;
	if(D<0)
	{
		cout<<"K�kler Sanald�r.";
	}
	else if(D>0)
	{
		X1=((-B+sqrt(D))/(2*A));
		X2=((-B-sqrt(D))/(2*A));
		cout<<"K�kler "<<X1<<" ve "<<X2<<" de�erleridir.";
	}
	else
	{
		X=((-B)/(2*A));
		cout<<"K�k "<<X<<" de�eridir.";
	}
	
return 0;
}

