#include <iostream> 
using namespace std; 
int main()
{
	setlocale(LC_ALL,"Turkish");
	double x,y;
	int z;
	cout<<"Birinci sayýyý giriniz:";
	cin>>x;
	cout<<"Ýkinci sayýyý giriniz:";
	cin>>y;
	cout<<"Ýþleminizi seçiniz:\nToplama için 1\nÇýkarma için 2\nÇarpma için 3\nBölme için 4"<<endl;
	cin>>z;
	switch(z){
		case 1: {
			cout<<"Sonuç:"<<x+y<<endl;
			break;
		}
		case 2: {
			cout<<"Sonuç:"<<x-y<<endl;
			break;
		}
		case 3: {
			cout<<"Sonuç:"<<x*y<<endl;
			break;
		}
		case 4: {
			cout<<"Sonuç:"<<x/y<<endl;
			break;
		}
		default: {
			cout<<"Hata!";
			break;
		}
	}
	return 0;
}
