#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	cout<<"Maximum number that can be displayed: "<<RAND_MAX<<endl;
	for(int i=1;i<=20;i++)
	cout<<(1+rand()%6)<<endl;
	return 0;
}
