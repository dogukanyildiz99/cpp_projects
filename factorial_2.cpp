#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	double sayi, sayac=1;
	double faktor=1;
	cout<<"Fakt�riyeli bulunacak say�y� giriniz: ";
	cin>>sayi;
	while(sayac<=sayi)
	{
		faktor=faktor*sayac;
		sayac=sayac++;
	}
	cout<<sayi<<" say�s�n�n fakt�riyeli: "<<faktor;
	return 0;
}
