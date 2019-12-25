//Dogukan YILDIZ 18332629024 Odev-2
#include <iostream>
using namespace std;

int CharCheck(int firstChar, int lastChar, string word)
{
	if(word[firstChar]==word[lastChar])
	{
		if(firstChar>lastChar)
		{
			CharCheck(firstChar+1,lastChar-1,word);
		}
		else
		{
			cout <<"\nThe reverse spelling of this word is the same!"<<endl;
		}
	}	
	else
	{
		cout <<"\nThe reverse spelling of this word is not the same!"<<endl;
	}
		
	return 0;
}

int main()
{
	int lastChar,firstChar;
	string word;

	cout<<"Enter a word to check: ";
	cin>>word;

	lastChar=word.length();
	CharCheck(0,lastChar-1,word);
	
	return 0;
}
