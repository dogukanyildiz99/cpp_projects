#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;
void EvenNumber(int[],int);
int main()
{
	setlocale(LC_ALL,"Turkish");
	int dizi[10];
	srand(time(0));
	for(int i=0; i<10; i++)
	{
		dizi[i]=rand();
		cout<<"dizi["<<i<<"]="<<dizi[i]<<endl;
		
	}
	
	EvenNumber(dizi,10);
	
	return 0;
}

void EvenNumber(int dizi[],int)
{
	for(int i=0; i<10; i++)
	{
		if(dizi[i]%2==0)
		{
			cout<<"dizinin"<<i<<"inci indeksi çifttir"<<dizi[i]<<endl;
		}
	}
}
