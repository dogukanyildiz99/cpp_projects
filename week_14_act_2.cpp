#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int BiggestNumber(int [],int);
int main()
{
	int dizi[10];
	int temp,biggestNumber;
	srand(time(0));
	
	for(int i=0; i<10; i++)
	dizi[i]=rand()%26*2;
	cout<<"Element"<<setw(14)<<"Value"<<endl;
	
	for(int j=0; j<10; j++)
	{
		cout<<setw(3)<<j+1<<setw(18)<<dizi[j]<<endl;
	}

	cout<<"\n Biggest number: "<<BiggestNumber(dizi,10)<<endl;
	
	return 0;	
}

int BiggestNumber(int dizi[], int n)
{
	for (int i=0; i<10; i++)
	{
		if (dizi[0]<dizi[i])
    	dizi[0]=dizi[i];
	}
	
return dizi [0] ;
}
