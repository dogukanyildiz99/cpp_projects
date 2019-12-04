#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	cout<<"The value of the clock at the moment is: "<<time(0)<<endl;
	for(int i=1;i<=20;i++)
	cout<<(1+rand()%6)<<endl;
	return 0;
}
