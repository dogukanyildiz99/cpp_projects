#include <iostream>
using namespace std;

int Palindrom(string, int, int);	//Bu kodda Fonksiyon yardýmý ile palindrom bulacaðýz.

int main()
{
	setlocale(LC_ALL,"Turkish");
	int sonKarakter;
	string kelime;
	
	cout << "Bir kelime girin: ";	//Kelimenin nokta ile bitmesine gerek yok.
	cin >>kelime;
	
	sonKarakter = kelime.length();	//Kelimenin uzunluðu
	Palindrom(kelime, 0, sonKarakter-1);
}

int Palindrom(string kelime, int ilkKarakter, int sonKarakter)	//Fonksiyonumuz.
{
	if(kelime[ilkKarakter] == kelime[sonKarakter])	//Kontroller
	{
		if(sonKarakter > ilkKarakter)
		{
		Palindrom(kelime, ilkKarakter+1, sonKarakter-1);
		}
		else
		{
		cout <<"Bu kelimenin tersten okunuþu aynýdýr!"; 
		}
	}
	
	else
	{
	cout <<"Bu kelimenin tersten okunuþu ayný deðildir!";
	}
	
	cout << "\n\n";
	
return main();
}
