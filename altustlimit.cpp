#include<iostream>
using namespace std;
int main()
{
int alt, ust, top;
cout<<"Alt limit: ";
cin>>alt;
cout<<"Ust limit: ";
cin>>ust;
for (int i=alt; i<=ust; i++)
{
	top=i+top;
	cout<<i<<endl;
}    
cout<<"\nToplam: "<<top;
 
return 0;
}
