#include <iostream>
using namespace std;
int main()
{
	char string1[30]; // 20 karakterlik dizi(null dahil)
	char string2[]="String Dizisi"; //14 karakter rezerve edilir(null dahil)
	
	cout<<"\"Bilgisayar Programlama Dersi\" yaz: "<<endl;
	cin>>string1;//string1 içerisine sadece bilgisayar atanýr. programlama ve dersi  kelimeleri input buffer içerisinde okunmayý bekler
	cout<<"1.String: "<<string1<<"\n2.String: "<<string2<<"\t";
	
	for(int i=0;string1[i]!='\0';i++) // null karaktere kadar stringi ekrana boþluklu olarak yazar
	cout<<string1[i]<<'\0';
	
	cin>>string1;
	cout<<"\n1.String: "<<string1;
	
	cin>>string1;
	cout<<"\n1.String: "<<string1<<endl;
	
	return 0;
}

