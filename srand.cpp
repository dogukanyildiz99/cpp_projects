#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	unsigned int seed;
	cout<<"Enter core value: ";
	cin>>seed;
	srand(seed);
	for(int i=1;i<=0;i++)
	cout<<(1+rand()%6)<<endl;
 return 0;
}
