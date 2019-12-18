#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int X = 10;
	int a[X];
	int sum=0;
	double avg;
	cout<<"Please enter ten elements for the array: "<<endl;
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9];
	
	for(int i=0; i<X; i++)
	sum+=a[i];
	avg=static_cast<double>(sum)/10;
	
	cout<<"Sum of the elements of the array is: "<<sum<<endl;
	cout<<"Average of the array is: "<<setprecision(4)<<avg;
	return 0;
}
