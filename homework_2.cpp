//�DEV 2 - 18332629024 - Do�ukan Y�ld�z - EE 1.S�n�f
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale(LC_ALL,"Turkish");
    double x, y, ts, sonYol, ilkYol, sonHiz;
    cout<<"A arac� i�in ilk h�z� giriniz: ";
    cin>>x;
    cout<<"B arac� i�in ilk h�z� giriniz: ";
    cin>>y;
    while(x,y>=45)
    {
    cout<<"\nA i�in 45'ten k���k bir de�er giriniz: ";
    cin>>x;
    cout<<"B i�in 45'ten k���k bir de�er giriniz: ";
    cin>>y;
    }
    sonHiz=(x+(2*1));
    ts=((sonHiz+y)/(5));  
    sonYol=((y*ts+(1/2*(3*(pow(ts,2)))))/60);
    cout<<"\nB noktas�ndan ��kan ara� "<<ts<<" saniye sonra "<<sonYol<<" km sonra A arac� ile kar��la��r.";
    
return 0;
}
/* Hocam denklemleri elimden geldi�ince temiz bir �ekilde yazmaya �al��t�m 
 uzun s�re de u�ra�t�m denklemleri ��kartmak i�in ancak baz� sonu�lar hatal� ��kabiliyor. */
 
