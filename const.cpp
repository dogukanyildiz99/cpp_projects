#include <iostream>
using namespace std;
int main()
{
	const int X = 10; //ilk değer atanmış sabit
	int a[X]={ 87,68,94,100,83,78,85,91,76,87};
	int sum=0;
	
	for(int i=0; i<X; i++)
	sum+=a[i];
	cout<<"Sum of the elements of the array is= "<<sum<<endl;
	
	return 0;
}
