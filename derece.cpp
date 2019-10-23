#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	double t;
	cout<<"Suyun sýcaklýk deðerini giriniz: ";
	cin>>t;
	{
		if(t<0)
		cout<<"Su katý haldedir.";
		else if(t>0 && t<100)
		cout<<"Su sývý haldedir.";
		else if(t==0)
		cout<<"Su katý ve sývý haldedir.";
		else if(t==100)
		cout<<"Su sývý ve gaz haldedir.";
		else
		cout<<"Su gaz haldedir.";
	}
 return 0;
}

