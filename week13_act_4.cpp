#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std;
int EvenNumber(int);
int main()
{
	setlocale(LC_ALL,"Turkish");
	int n[10];
	srand(time(0));
	for(int i=0; i<10; i++)
	n[i]=rand();
	cout<<"Eleman"<<setw(13)<<"Deðer"<<endl;
	for(int j=0; j<10; j++)
	{
	cout<<setw(3)<<j+1<<setw(16)<<n[j]<<endl;
}
	return 0;
}

