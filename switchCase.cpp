#include <iostream>
using namespace std;
int main()
{
	double x,y;
	int z;
	cout<<"Please enter the first number: ";
	cin>>x;
	cout<<"Please enter the second number: ";
	cin>>y;
	cout<<"Please choose what you want to do,\nFor Addition 1: \nFor Subtraction 2: \nFor Multiplication 3: \nFor Division 4: ";
	cin>>z;
	switch(z)
	{
		case 1:{
		cout<<x+y<<endl;
			break;
		}
		case 2:{
			cout<<x-y<<endl;
			break;
		}
		case 3:{
			cout<<x*y<<endl;
			break;
		}
		case 4:{
			cout<<x/y<<endl;
			break;
		}
	default:{
		cout<<"ERROR!"<<endl;
		break;
	}
	}
return 0;
}
