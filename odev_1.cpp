#include <iostream>
#include <iomanip> //to use setw
#include <cstdlib>
#include <ctime> //to use srand
using namespace std;

int Buyukluk(int i)
{
	if(dizi[i]>dizi[i-1]||dizi[i]>dizi[i+1])
	enBuyuk=dizi[i];
	return 1;
	else
	return Buyukluk(i+1);
}

int main()
{
	setlocale(LC_ALL,"Turkish"); //to use Turkish language
	int dizi[20];
	int enBuyuk, enKucuk;
	srand(time(0));
	
	for(int i=0; i<20; i++)
	dizi[i]=rand()%10+27;	
	cout<<"Eleman"<<setw(13)<<"Deðer"<<endl;
	cout<<Buyukluk(int i);
	
	for(int j=0; j<20; j++)
	{
	cout<<setw(3)<<j+1<<setw(16)<<dizi[j]<<endl;
	}
	
	cout<<
	
	return 0;

}


