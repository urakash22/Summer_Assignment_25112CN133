// A Strong Number is the number whose Sum of the factorial of its digit is equal to the number itself.
// Example : 145
// Factorials : 1! = 1
//            : 4! = 24
//            : 5! = 120 
// Sum = 1+24+120  = 145
// *** APPROACH ***
// input n
// Store original number using temp
// Extract each digit using %10
// find factorial of the digit
// Add the factorial to the sum 
// Remove the digit using /10
// After all the processing 
// if ( sum == temp), Strong number
// else Not Strong no..

#include<iostream>
using namespace std;
int main()
{
    int n,fact, sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    int temp = n;
    while(n>0)
    {
        int rem = n%10;

        fact = 1;
        for(int i = 1; i<=rem; i++)
        {
            fact = fact*i;
        }
        sum += fact;
        n /= 10;
    }
    if( temp == sum )
    {
        cout<<"Strong Number";
    }
    else{
        cout<<"Not Strong Number ";
    }

    return 0;
}