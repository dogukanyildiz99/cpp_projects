#include <iostream>
#include <iomanip> //to use setw
#include <cstdlib>
using namespace std;
int main()
{
	int n[10];
	for(int i=0; i<10; i++)
	n[i]=rand()%6+50;
	cout<<"eleman"<<setw(13)<<"deger"<<endl;
	for(int j=0; j<10; j++)
	{
	cout<<setw(3)<<j+1<<setw(16)<<n[j]<<endl;
}
	return 0;
}

