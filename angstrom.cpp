#include <iostream>
#include <cmath>
using namespace std;
int Func(int,int,int,int);
int main()
{
	int x,y,z,k,A;
	for(int i=1000;i<=9999;i++)
	{
		x=(i%10)/1;
		y=(i%100)/10;
		z=(i%1000)/100;
		k=(i%10000)/1000;
		if(Func(x,y,z,k)==i)		
		cout<<Func(x,y,z,k)<<" is an Armstrong number."<<endl;		
	}	
	return 0;
}
int Func(int x,int y,int z,int k)
{
	return pow(x,4)+pow(y,4)+pow(z,4)+pow(k,4);
}

