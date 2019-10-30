#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	double sayi, sayac=1;
	double faktor=1;
	cout<<"Faktöriyeli bulunacak sayýyý giriniz: ";
	cin>>sayi;
	while(sayac<=sayi)
	{
		faktor=faktor*sayac;
		sayac=sayac++;
	}
	cout<<sayi<<" sayýsýnýn faktöriyeli: "<<faktor;
	return 0;
}
