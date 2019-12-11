#include <iostream>
using namespace std;
int main()
{
	char letter;
	int number;
	cout<<"Please enter two sentences with ending a '.':"<<endl<<endl;
	for(int i=1;i<=2;i++)
	{
		number=0;
		cin>>letter;
		while(letter!='.')
		{
		if((letter=='A')||(letter=='a'))
		number++;
		cin>>letter;
		}
		cout<<"\nSentence "<<i<<" has "<<number<<" A or a letters."<<endl;
	}	
	return 0;
}
