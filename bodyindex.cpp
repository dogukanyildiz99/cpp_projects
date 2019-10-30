#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	double boy, kutle, vki;
	cout<<"Kg cinsinden kütleyi, m cinsinden boy uzunluðunu giriniz: ";
	cin>>kutle>>boy;
	vki=kutle/(pow(boy,2));
	if(vki<16)
	cout<<"Aþýrý az kilolu.";
	else if(vki<18.5)
	cout<<"Az kilolu.";
	else if(vki<25)
	cout<<"Normal.";
	else if(vki<30)
	cout<<"Kilolu.";
	else
	cout<<"Obez.";
	return 0;
}

