#include <iostream>
using namespace std;
int main()
{
	char string[50];
	int sayac=0;
	cout<<"Enter a word: ";
	cin>>string;
	cout<<"Your word: "<<string<<endl;
	
	for(int i=0;string[i]!='\0';i++)
	{
	sayac=sayac+1;
}

	cout<<"There are "<<sayac<<" letters in your word.";
	
	if(sayac<5)
	{
		while(string[0]!=string[sayac-2])
		{
		string[0]='*';
		string[sayac-2]='*';
		cout<<"\nYour word after some change "<<string;	
	}
}
	else
	{
		while(string[4]!=string[sayac-2])
		{
		string[4]='*';
		string[sayac-2]='*';	
		cout<<"\nYour word after some change: "<<string;	
	}
}

	return 0;
}

