//ÖDEV 2 - 18332629024 - Doðukan Yýldýz - EE 1.Sýnýf
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale(LC_ALL,"Turkish");
    double x, y, ts, sonYol, ilkYol, sonHiz;
    cout<<"A aracý için ilk hýzý giriniz: ";
    cin>>x;
    cout<<"B aracý için ilk hýzý giriniz: ";
    cin>>y;
    while(x,y>=45)
    {
    cout<<"\nA için 45'ten küçük bir deðer giriniz: ";
    cin>>x;
    cout<<"B için 45'ten küçük bir deðer giriniz: ";
    cin>>y;
    }
    sonHiz=(x+(2*1));
    ts=((sonHiz+y)/(5));  
    sonYol=((y*ts+(1/2*(3*(pow(ts,2)))))/60);
    cout<<"\nB noktasýndan çýkan araç "<<ts<<" saniye sonra "<<sonYol<<" km sonra A aracý ile karþýlaþýr.";
    
return 0;
}
/* Hocam denklemleri elimden geldiðince temiz bir þekilde yazmaya çalýþtým 
 uzun süre de uðraþtým denklemleri çýkartmak için ancak bazý sonuçlar hatalý çýkabiliyor. */
 
