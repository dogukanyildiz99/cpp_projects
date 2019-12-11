#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	int n[10];
	unsigned int seed;
	cout<<"Enter core value: ";
	cin>>seed;
	srand(seed);
	for(int i=0; i<10; i++)
	n[i]=rand()%6+50;
	cout<<"integer"<<setw(13)<<"value"<<endl;
	for(int j=0; j<10; j++)
	{
	cout<<setw(3)<<j+1<<setw(16)<<n[j]<<endl;
}
	return 0;
}
