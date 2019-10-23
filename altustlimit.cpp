#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int alt, ust, top;
	cout<<"Alt limit: ";
	cin>>alt;
	cout<<"Üst limit: ";
    cin>>ust;
    for (int i=alt; i<=ust; i++)
  {
	top=i+top;
	cout<<i<<endl;
  }    
cout<<"\nToplam: "<<top;
 
return 0;
}
