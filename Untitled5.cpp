#include <iostream>
#include <iomanip>  
using namespace std;  
int main() 
{  
setlocale(LC_ALL,"Turkish");
    int toplam,i; 
    double ortalama,sayac;  
    for(int i=1; i<=100;i++)  
    { 
    cout<<i<<" "; 
    if(i%7==0) 
    {   
	cout<<"\tBölünebilir"; 
	toplam=i+toplam; 
    cout<<" \t"<<toplam<<endl; 
	sayac=sayac+1;
    } 
    else 
    {
    cout<<"\tBölünemez"<<endl; 
    } 
}
    ortalama=toplam/sayac; 
    cout<<"\tOrtalama: "<<setprecision(3)<<ortalama<<endl;
    cout<<"\tToplam: "<<toplam;
	  
return 0;  
}  
