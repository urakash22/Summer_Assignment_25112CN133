// A Perfect No is the no that is equal to the sum of its proper divisor(excluding itself).
// Example : 6 ---- divisor 1,2,3;
// Sum = 1+2+3 = 6;
// So 6 is the perfect No..;

//  *** Approach ***
// input n
// intialize sum = 0
// Loop from 1 to n/2
// if( n%i == 0 ) , add i to sum.
// if ( sum == n ),Perfect No.
// else Not Perfect No.

#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i<= n/2; i++)
    {
        if (n % i== 0)
        {
            sum += i;
        }
        
    }
    if( sum == n)
    {
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not Perfect Number";
    }

    return 0;

}