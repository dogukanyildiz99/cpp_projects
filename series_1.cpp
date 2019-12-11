#include <iostream>
#include <iomanip> //to use setw
#include <cstdlib>
using namespace std;
int main()
{
	int n[]={ 10, 20, 30, 40, 50 };
	cout<<"Eleman"<<setw(11)<<"Deger"<<endl;
	for(int j=0; j<5; j++)
	cout<<setw(3)<<j+1<<setw(12)<<n[j]<<endl;
	return 0;
}

