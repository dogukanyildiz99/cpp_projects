//�DEV 1- 18332629024 - Do�ukan Y�ld�z - EE 1.S�n�f
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int top;
    for(int i=1;i<=20;i++)
  {
    if((i-1)<=0)
    {
        top=0;
        cout<<i<<". BTU Say�s� "<<" = "<<top<<endl;
    }
    else if((i-2)==0)
    {
        top=(i-1);
        cout<<i<<". BTU Say�s� "<<" = "<<top<<endl;
    }
    else
   {
        top=(i-1)+(i-2)+(i-3);
        cout<<i<<". BTU Say�s� "<<" = "<<top<<endl;
   }
 }
    return 0;
}
