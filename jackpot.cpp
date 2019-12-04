#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int number,i;
	int sayac=0;
	cout<<"Please guess a  number between 0-100: ";
	cin>>number;
	sayac=sayac+1;
	while(number>100||number<0)
	{
	cout<<"Please enter a correct value: ";
	cin>>number;
	sayac=sayac+1;
	}
	srand(time(0));
	i=rand()%101;
	while(number!=i)
{
	if(number<i)
	{
	cout<<"The value you have entered is smaller than the number try again:";
	cin>>number;
	sayac=sayac+1;
	}
	else if(number>i)
	{
	cout<<"The value you have entered is bigger than the number try again:";
	cin>>number;
	sayac=sayac+1;
	}
}
	if(number==i)
	cout<<"Congratulations you've won trying "<<sayac<<" times";
	return 0;
}

