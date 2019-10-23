#include <iostream> 
using namespace std; 
int main () 
{ 
    int number, i = 1, factorial = 1; 
    cout<<" Enter a positive number: "; 
    cin>> number; 
    while ( i <= number)
	{ 
    factorial *= i; 
    ++i; 
    } 
cout<<" Factorial of "<< number << " is = " << factorial; 
return 0; 
}
