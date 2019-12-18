#include <iostream>
#include <iomanip> //to use setw
#include <cstdlib>
#include <ctime> //to use srand
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish"); //to use Turkish language
	int dizi[20];
	int enBuyuk, enKucuk,temp;
	srand(time(0)); //to get different elements in every run
	
	for(int i=0; i<20; i++)
	dizi[i]=rand()%10+27;	
	cout<<"Eleman"<<setw(14)<<"Deðer"<<endl;
	
	for(int j=0; j<20; j++)
	{
		cout<<setw(3)<<j+1<<setw(16)<<dizi[j]<<endl;
	}
	
	for(int i=0; i<20; i++)  //have to find a way to use it in func
	{
		if(dizi[0] < dizi[i])
    	dizi[0] = dizi[i];
	}
    
    cout<<"\n En büyük sayý: "<<dizi[0]<<endl;

	for(int i=0; i<20; i++) //have to find a way to use it in func
	{
		if(dizi[0] > dizi[i])
    	dizi[0] = dizi[i];
	}
	
	cout<<"\n En küçük sayý: "<<dizi[0]<<endl;	

	for(int i=0;i<20-1;i++) // to sort numbers 
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
	cout<<"\n Küçükten büyüðe sýralama: "<<endl<<endl;
	for (int i=0;i<20;i++)
	cout<<" "<<dizi[i]<<" ";
	
	return 0;
	
}

