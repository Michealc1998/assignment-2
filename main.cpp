/**
 * Micheál Carroll
 * C00218621
 * Exercise 2
 * Factorial Calculator
 */

 //Preprosser directives
#include <iostream>

using namespace std;

//<Main()Function
int main()
{
    //Variable Declaration
    int n, factorial = 1;

    //Name of program
    cout <<"Factorial Calculator\n\n";

    //Read in the values
    cout <<"Enter a value Greater than 0: ";
    cin >> n;

    //For Loop
    for (int num = 1; num <= n; num++)
    {
        factorial = factorial * num;
    }

    //display final result
    cout<<"\n The Factorial of "<< n <<" is: "<< factorial;

    return 0;
}
