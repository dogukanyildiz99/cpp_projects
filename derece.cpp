#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	double t;
	cout<<"Suyun s�cakl�k de�erini giriniz: ";
	cin>>t;
	{
		if(t<0)
		cout<<"Su kat� haldedir.";
		else if(t>0 && t<100)
		cout<<"Su s�v� haldedir.";
		else if(t==0)
		cout<<"Su kat� ve s�v� haldedir.";
		else if(t==100)
		cout<<"Su s�v� ve gaz haldedir.";
		else
		cout<<"Su gaz haldedir.";
	}
 return 0;
}

