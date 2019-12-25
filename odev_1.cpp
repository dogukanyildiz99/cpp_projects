//Dogukan YILDIZ 18332629024 Odev-1
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int BiggestNumber(int [],int);
int SmallestNumber(int [],int);

int main()
{
	int dizi[20];
	int temp;
	srand(time(0));
	
	for(int i=0; i<20; i++)
	dizi[i]=rand()%10+27;
		
	cout<<"Element"<<setw(14)<<"Value"<<endl;
	
	for(int j=0; j<20; j++)
	{
		cout<<setw(3)<<j+1<<setw(16)<<dizi[j]<<endl;
	}
	
	cout<<"\n Biggest number: "<<BiggestNumber(dizi,20)<<endl;
	
	cout<<"\n Smallest number: "<<SmallestNumber(dizi,20)<<endl;

	for(int i=0;i<20-1;i++) //syralama
	{
		for(int j=0;j<20-1;j++) 
		{ 
			if(dizi[j]>dizi[j+1]) 
			{ 
			temp=dizi[j]; 
			dizi[j]=dizi[j+1]; 
			dizi[j+1]=temp; 
			} 
		}
	}
	
	cout<<"\n Listing by ascending value: "<<endl<<endl;
	
	for (int i=0;i<20;i++)
	cout<<" "<<dizi[i]<<" ";
	
	return 0;	
}

//fonksiyonlar

int BiggestNumber(int dizi[], int n)
{
	for (int i=0; i<20; i++)
	{
		if (dizi[0]<dizi[i])
    	dizi[0]=dizi[i];
	}
	
return dizi [0] ;
}
 
int SmallestNumber(int dizi[], int n)
{
	for (int j=0; j<20; j++)
	{
		if (dizi[0]>dizi[j])
    	dizi[0]=dizi[j] ;
	}
return dizi [0] ;
}

