#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int vize,final,sonuc;
	cout<<"Vize notunu giriniz: ";
	cin>>vize;
	cout<<"Final notunu giriniz: ";
	cin>>final;
	sonuc=(vize*(2/5))+(final*(3/5));
	if(sonuc>=50)
	{
		cout<<"Geçtiniz.";
	}
	else
	{
		cout<<" Kaldýnýz.";
	}
}
