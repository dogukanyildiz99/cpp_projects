#include <iostream> 
using namespace std; 
int main()
{
	setlocale(LC_ALL,"Turkish");
	double x,y;
	int z;
	cout<<"Birinci say�y� giriniz:";
	cin>>x;
	cout<<"�kinci say�y� giriniz:";
	cin>>y;
	cout<<"��leminizi se�iniz:\nToplama i�in 1\n��karma i�in 2\n�arpma i�in 3\nB�lme i�in 4"<<endl;
	cin>>z;
	switch(z){
		case 1: {
			cout<<"Sonu�:"<<x+y<<endl;
			break;
		}
		case 2: {
			cout<<"Sonu�:"<<x-y<<endl;
			break;
		}
		case 3: {
			cout<<"Sonu�:"<<x*y<<endl;
			break;
		}
		case 4: {
			cout<<"Sonu�:"<<x/y<<endl;
			break;
		}
		default: {
			cout<<"Hata!";
			break;
		}
	}
	return 0;
}
