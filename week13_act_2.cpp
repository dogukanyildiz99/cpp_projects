#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	int sum;
	int n[10];
	srand(time(0));
	for(int i=0; i<10; i++)
	n[i]=rand()%16+15;
	cout<<"integer"<<setw(13)<<"value"<<endl;
	for(int j=0; j<10; j++)
	{
	cout<<setw(3)<<j+1<<setw(16)<<n[j]<<endl;
}
	for(int a=0;a<10;a++)
	{
		sum=sum+n[a];
	}
	cout<<"Sum of all the numbers in the array is: "<<sum;
	
	return 0;
}

